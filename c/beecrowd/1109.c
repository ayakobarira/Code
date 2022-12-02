#include<stdio.h>
int main(){
    double M[12][12],sum=0;
    char O[2];
    int n=1,m=10;
    scanf("%s",O);
    for(int i=0;i<12;i++)
        for(int j=0;j<12;j++)
            scanf("%lf",&M[i][j]);
    for(int i=11;i>6;i--){
        for(int j=n;j<=m;j++){
            sum+=M[j][i];
        }
        n++;
        m--;
    }
    if(O[0]=='S')
    printf("%.1lf\n",sum);
    else 
    printf("%.1lf\n",sum/30.0);
    return 0;
}