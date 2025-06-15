#include<stdio.h>
void main(){
    int base,exp,res=1;
    printf("Enter base:");
    scanf("%d",&base);
    printf("Enter exp:");
    scanf("%d",&exp);
    for(int i=1;i<=exp;i++){
        res*=base;
    }
    printf("result=%d",res);
}