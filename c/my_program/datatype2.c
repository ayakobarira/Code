/*
write a program that prints a floating,
double number and character
*/
#include<stdio.h>
int main(){
    float num1=10.5;
    double num2=10.5135667;
    char ch='a';

    printf("num1 = %.1f\n",num1);
    printf("num2 = %lf\n",num2);
    printf("ch = %c",ch);

return 0;

}