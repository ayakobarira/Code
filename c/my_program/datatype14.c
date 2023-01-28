//conversion btw octal and hexadecimal
#include<stdio.h>
int main(){
    int number;
    printf("octal number : ");
    scanf("%o",&number);
    printf("hexadecimal number : %x",number);
    getch();
}