// Write a program to calculate sum of numbers from m to n
#include<stdio.h>
void main(){
    int m,n,i,sum=0;
    printf("enter the value of m:");
    scanf("%d",&m);
    printf("enter the value of n:");
    scanf("%d",&n);

    for(i=m;i<=n;i++){
        sum+=i;
    }
    printf("sum=%d",sum);
}