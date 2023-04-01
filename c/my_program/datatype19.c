#include<stdio.h>
int main(){
    int n,count;
    scanf("%d",&n);
    count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){  //O(n^2)
            count=count+1;
        }
    }
    for(int i=0;i<n;i++){    //O(n)
        count=count+1;
    }
    printf("count=%d\n",n,count);
}