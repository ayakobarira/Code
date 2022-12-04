#include<stdio.h>
int main(int argc, char** argv) {
    char a,b,c;
    printf("A = %c, B = %c, C = %cn",a,b,c);
    printf("A = %c, B = %c, C = %cn",b,c,a);
    printf("A = %c, B = %c, C = %cn",c,a,b);
}
