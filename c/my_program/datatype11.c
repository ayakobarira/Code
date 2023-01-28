//uppercase to lowercase with library function//
#include<stdio.h>
int main(){
    char upper,lower;
    printf("enter uppercase : ");
    scanf("%c",&upper);

    lower = tolower(upper);
    printf("lowercase = %c",lower);
}