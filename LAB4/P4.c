// Write a program to delete a number from an array that is already sorted in an
// ascending order.

#include<stdio.h>
void main(){
    int n;
    printf("Enter a number of element:");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter %d elements in ascending order:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int num,pos;
    printf("Enter a delete number: ");
    scanf("%d",&num);

    for(pos=0;pos<n;pos++){
        if(a[pos]==num){
            break;
        }
    }
    for(int i=pos;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;

    printf("After deleted element:\n");
    for(int i=0;i<n;i++){
        printf("a[%d]= %d \n",i,a[i]);
    }
   
}