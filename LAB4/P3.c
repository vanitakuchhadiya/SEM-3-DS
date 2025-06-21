// Write a program to insert a number in an array that is already sorted in an
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
    printf("Enter a inserted number: ");
    scanf("%d",&num);

    for(pos=0;pos<n;pos++){
        if(a[pos]>num){
            break;
        }
    }
    for(int i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=num;
    n++;

    
    printf("After inserted element:\n");
    for(int i=0;i<n;i++){
        printf("a[%d]= %d \n",i,a[i]);
    }
   
}