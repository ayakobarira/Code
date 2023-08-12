#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

struct ListNode* oddEvenList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode* oddDummy = createNode(0);
    struct ListNode* evenDummy = createNode(0);
    struct ListNode*oddTail = oddDummy;
    struct ListNode* evenTail = evenDummy;

    int isOdd = 1; // Flag to track odd and even positions
    struct ListNode* current = head;

    while (current != NULL) {
        if (isOdd) {
            oddTail->next = current;
            oddTail = oddTail->next;
        } else {
            evenTail->next = current;
            evenTail = evenTail->next;
        }

        isOdd = !isOdd;
        current = current->next;
    }

    evenTail->next = NULL; // Terminate the even list
    oddTail->next = evenDummy->next; // Connect odd list to even list

    struct ListNode* newHead = oddDummy->next;
    free(oddDummy);
    free(evenDummy);

    return newHead;
}

void printList(struct ListNode* head) {
    struct ListNode* current = head;
    while (current != NULL) {
        printf("%d -> ", current->val);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    // Create a sample linked list: 1 -> 4 -> 3 -> 4 -> 5 -> NULL
    struct ListNode* head = createNode(1);
    head->next = createNode(4);
    head->next->next = createNode(2);
    head->next->next->next = createNode(6);
    head->next->next->next->next = createNode(5);

    printf("Original List: ");
    printList(head);

    // Group odd and even nodes in the linked list
    struct ListNode* newHead = oddEvenList(head);

    printf("Modified List: ");
    printList(newHead);

    return 0;
}