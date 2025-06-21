// Write a program to insert a number at a given location in an array
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
    printf("Enter position from (0 to %d):",n);
    scanf("%d",&pos);
    printf("Enter a inserted number: ");
    scanf("%d",&num);

    for(int i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=num;
    n++;
    printf("After inserted element:\n");
    for(int i=0;i<n;i++){
        printf(" %d ",a[i]);
    }
   
}