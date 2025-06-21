// Write a program to delete duplicate numbers from an array.
#include<stdio.h>
void main(){
    int n,i,j,k;
    printf("enter number of element:");
    scanf("%d",&n);
    int arr[n],pos;
    printf("enter %d number :\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i] == arr[j]) {
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; 
                j--; 
            }
        }
    }
    printf("After deleted dublicate element:\n");
    for(int i=0;i<n;i++){
        printf("a[%d]= %d \n",i,arr[i]);
    }
    
}
