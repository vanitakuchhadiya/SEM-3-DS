//sum of 1+(1+2)+(1+2+3)+....
#include<stdio.h>
void main(){
    int n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            sum+=j;
        }
    }
    printf("sum = %d",sum);

}