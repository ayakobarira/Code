//uppercase to lower letter without library function//
#include<stdio.h>
int main(){
    char upper;
    printf("enter uppercase : ");
    scanf("%c",&upper);//A=65
    printf("enter lowercase : %c",upper+32);//a=97
}