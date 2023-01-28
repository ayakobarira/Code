// arithmetic operator
//write a program that takes two integer n display sum
#include<stdio.h>
int main(){
    int num1,num2,sum;
    float avg;
    printf("enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    sum = num1+num2;
    printf("sum %d\n",sum);

    avg = (float)sum/2;//type casting
    printf("avg %f\n",avg);//to see exact decimal number divide .2f

}