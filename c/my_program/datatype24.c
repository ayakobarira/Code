//selection sort
#include<stdio.h>
void selection_sort(int A[],int n){
    int i,min,temp;
    for(int i=0;i<n-1;i++){
        min=i;
    for(int j=0;j<n;j++){
        if(A[j]<A[min]){
            min=j;
        }
    }
    }
    if(min!=i){
        temp=A[i];
        A[i]=A[min];
        A[min]=temp;
    }
}