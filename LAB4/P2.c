// Write a program to delete a number from a given location in an array
#include<stdio.h>
void main(){
    int n;
    printf("Enter a number of element:");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter %d elements:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pos,num;
    printf("Enter position to delete (0 to %d):",n-1);
    scanf("%d",&pos);

    for(int i=pos;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    printf("After deleted element:\n");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
   
}