#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createLinkedList(int n);
void displayLinkedList(struct Node* head);
struct Node* reverseLinkedList(struct Node* head);
int findMin(struct Node* head);
int findMax(struct Node* head);
int product(struct Node* head);
struct Node* search(struct Node* head, int key);
struct Node* sort(struct Node* head);

int main() {
    int n, choice, key;
    struct Node *head, *result;

    do {
        printf("\nMenu:\n");
        printf("1. Create and display a linked list\n");
        printf("2. Reverse the linked list\n");
        printf("3. Find the minimum and maximum values in the linked list\n");
        printf("4. Find the product of all the elements in the linked list\n");
        printf("5. Search an element in the linked list\n");
        printf("6. Sort the elements of the linked list\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of nodes: ");
                scanf("%d", &n);
                head = createLinkedList(n);
                displayLinkedList(head);
                break;
            case 2:
                head = reverseLinkedList(head);
                printf("Linked list reversed.\n");
                displayLinkedList(head);
                break;
            case 3:
                printf("Minimum value in the linked list: %d\n", findMin(head));
                printf("Maximum value in the linked list: %d\n", findMax(head));
                break;
            case 4:
                printf("Product of all elements in the linked list: %d\n", product(head));
                break;
            case 5:
                printf("Enter the element to search: ");
                scanf("%d", &key);
                result = search(head, key);
                if (result == NULL) {
                    printf("Element not found.\n");
                } else {
                    printf("Element found at address %p.\n", result);
                }
                break;
            case 6:
                head = sort(head);
                printf("Linked list sorted.\n");
                displayLinkedList(head);
                break;
            case 7:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}

struct Node* createLinkedList(int n) {
    struct Node *head, *newNode, *temp;
    int data, i;

    head = NULL;

    for (i = 1; i <= n; i++) {
        printf("Enter the data for node %d: ", i);
        scanf("%d", &data);

        newNode = (struct Node*) malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    return head;
}

void displayLinkedList(struct Node* head) {
    struct Node* temp;

    if (head == NULL) {
        printf("Linked list is empty.\n");
    } else {
        printf("Linked list: ");
        temp = head;
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp =temp->next;
}
printf("\n");
}
}

struct Node* reverseLinkedList(struct Node* head) {
struct Node *prev, *curr, *next;
prev = NULL;
curr = head;

while (curr != NULL) {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
}

head = prev;

return head;
}

int findMin(struct Node* head) {
int min = head->data;
struct Node* temp = head->next;
while (temp != NULL) {
    if (temp->data < min) {
        min = temp->data;
    }
    temp = temp->next;
}

return min;
}

int findMax(struct Node* head) {
int max = head->data;
struct Node* temp = head->next;
while (temp != NULL) {
    if (temp->data > max) {
        max = temp->data;
    }
    temp = temp->next;
}

return max;
}

int product(struct Node* head) {
int prod = 1;
struct Node* temp = head;
while (temp != NULL) {
    prod *= temp->data;
    temp = temp->next;
}

return prod;
}

struct Node* search(struct Node* head, int key) {
struct Node* temp = head;
while (temp != NULL) {
    if (temp->data == key) {
        return temp;
    }
    temp = temp->next;
}

return NULL;
}

struct Node* sort(struct Node* head) {
struct Node *i, *j;
int temp;
for (i = head; i != NULL; i = i->next) {
    for (j = i->next; j != NULL; j = j->next) {
        if (i->data > j->data) {
            temp = i->data;
            i->data = j->data;
            j->data = temp;
        }
    }
}

return head;
}