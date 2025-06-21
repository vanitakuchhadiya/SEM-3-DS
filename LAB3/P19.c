// . Write a program to find position of the smallest number & the largest number from given n numbers.

#include<stdio.h>
void main(){
    int n,i;
    printf("enter number of element:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d number :",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];\
    int minpos=0,maxpos=0;
    for(i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            minpos=i;
        }
        else if(max<arr[i]){
            max=arr[i];
            maxpos=i;
        }
    }
    printf("smallest element=%d at position %d\n",min,minpos+1);
     printf(" largest element=%d at position %d",max,maxpos+1);
}
