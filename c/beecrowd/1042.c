#include<stdio.h>
int max(int x,int y){
    int M;
    M=(x>y)?x:y;
    return M;

}
int min(int x,int y){
    int M;
    M=(x<y)?x:y;
    return M;
}
int main()
{
    int a,b,c,x,y,z;
    scanf("%d %d %d",&a,&b,&c);
    x=max(a,max(b,c));
    

}