// Write a program to find whether the array contains a duplicate number or not.
#include<stdio.h>
void main(){
    int n,i,j,isDuplicate=0;
    printf("enter number of element:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d number :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                isDuplicate=1;
                break;
            }
        }
        if(isDuplicate){
            break;
        }
    }
    if(isDuplicate==1){
        printf("Array contains dublicate numbers");
    }
    else{
         printf("Array doesn't contain dublicate numbers");
    }
}
