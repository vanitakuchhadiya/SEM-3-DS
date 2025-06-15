//prime number from given range
#include<stdio.h>
int main(){
    int start,end;
    printf("Enter starting number: ");
    scanf("%d",&start);
    printf("Enter ending number: ");
    scanf("%d",&end);

    for(int i=start;i<=end;i++){
        if(isPrime(i)==1){
            printf("Given number is Prime");
        }
        else{
             printf("Given number is not Prime");
        }
    }
}
int isPrime(int n){
    int count=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        return 1;
    }
    else{
        return 0;
    }
}