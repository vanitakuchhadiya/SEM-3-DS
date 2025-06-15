#include <stdio.h>

void main() {
    int n,res=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++){
        res*=i;
    }
    printf("result=%d",res);
}
