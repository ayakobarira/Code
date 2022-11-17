#include<stdio.h>
int main(){
    int a,b,c,d,n=0,y=0;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a==1){
    printf("YES\n");
    }
    else if(a==0){
        n=n+1;
        if(b==1)
        {
            y=y+1;
        }
        else if(b==0)
        {
            n=n+1;
        }
        if(c==1)
        {
            y=y+1;
        }
        else if(c==0)
        {
            n=n+1;
        }
        if(d==1)
        {
            y=y+1;
        }
        else if(d==0)
        {
            n=n+1;
        }


    if(n>y){
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }
    }
    return 0;
}