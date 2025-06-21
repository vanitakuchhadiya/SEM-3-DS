// Write a program to calculate average of first n numbers.
#include<stdio.h>
void main(){
    int n,i,sum=0;
    float avg;
    printf("enter number of element:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d number :",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("entered numbers:\n");
    for(i=0;i<n;i++){
        printf("a[+i+] %d\n",arr[i]);
        sum+=arr[i];
    }
    printf("sum=%d\n",sum);
    avg=sum/n;
    printf("average=%.2f",avg);

}

