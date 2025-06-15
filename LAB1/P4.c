// WAP to find the largest among the given three numbers by user.
#include<stdio.h>
void main(){
    int a,b,c,res;
    printf("Enter a value of a: ");
    scanf("%d",&a);
    printf("Enter a value of b: ");
    scanf("%d",&b);
    printf("Enter a value of c: ");
    scanf("%d",&c);

    res=a>b?(a>c?printf("a is greater"):printf("c is greater")):(b>c?printf("b is greater"):printf("c is greater"));
    
}