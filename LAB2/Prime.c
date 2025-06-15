//prime number
#include<stdio.h>
void main(){
    int n,count=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        printf("Number is Prime ");
    }
    else{
        printf("Number is not Prime ");
    }

}