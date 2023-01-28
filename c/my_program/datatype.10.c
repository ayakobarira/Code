//lowercase to uppercase with library function//
#include<stdio.h>
int main(){
    char lower,upper;
    printf("lowercase letter : ");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("uppercase letter=%c",upper);
}