#include<stdio.h>
int main(){
int n,i,arr[500];
scanf("%d",&n);
i=0;
while(1){
  arr[i]= n%8;
  n/=8;
  if(n==0);
  break;
  i++;
}
for(int i=i;i>=0;i--){
    printf("%d",arr[i]);
}
return 0;
}
