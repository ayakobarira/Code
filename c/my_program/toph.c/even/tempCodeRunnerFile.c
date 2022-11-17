#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==0 && b==0 && c==0 && d==0)
    {
    printf("\n");
    }
    else if(c==1 && d==0 && a==1 && b==0)
    {
    printf("YES\n");
    }
    else if(c==1 && d==1 && a==0 && b==0)
    {
    printf("YES\n");
    }
    else if(c==1 && d==1 && a==1 && b==0)
    {
    printf("YES\n");
    }
    else if(c==1 && d==1 && a==1 && b==1)
    {
    printf("YES\n");
    }
    else if(c==0 && d==0 && a==1 && b==1)
    {
    printf("YES\n");
    }
    else if(c==0 && d==0 && a==0 && b==1)
    {
    printf("N0\n");
    }
    else if(c==0 && d==0 && a==0 && b==0)
    {
    printf("N0\n");
    }
    else if(c==0 && d==1 && a==0 && b==1)
    {
    printf("YES\n");
    }
    return 0;
}