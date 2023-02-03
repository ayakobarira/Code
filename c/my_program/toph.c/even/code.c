#include<stdio.h>
#include<stdlib.h>

int n=0;
struct student_info
{
    int id;
    char name[5000];
    float cgpa;
} info[100000];
enter_info()
{
    for(int i=0; i<n; i++)
    {
        printf("Enter Student ID: ");
        scanf("%d",&info[i].id);
        printf("\nEnter Student Name: ");
        scanf("%s",&info[i].name);
        printf("\nEnter Student CGPA: ");
        scanf("%f",&info[i].cgpa);
        printf("\n\n");
    }
}
display_info()
{
    for(int j=0; j<n; j++)
    {
        printf("Student ID: %d\n",info[j].id);
        printf("Student Name: %s\n",info[j].name);
        printf("Student ID: %.2f\n\n",info[j].cgpa);
    }
}

int main()
{
    char d;

    printf("Enter the Number of Student that you want to Add:\n");
    scanf("%d",&n);

    enter_info();

    printf("Do you want to see all the information? : Y or N\n");
    printf("enter your choice:\n");
    scanf("%s",&d);

    if(d == 'y' || d == 'Y')
    {
        display_info();
    }
    else
    {
        exit(1);
    }

    return 0;
}