// Write a program to read and display n numbers using an array.
#include<stdio.h>
void main(){
    int n,i;
    printf("enter number of element:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d number :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("entered numbers:\n");
    for(i=0;i<n;i++){
        printf("a[%d] =%d\n",i,arr[i]);
    }
}
