#include<stdio.h>
void main(){
   int a[2][2],b[2][2],sum[2][2];
   int i,j;

    printf("Enter first array element :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter second array element :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("After addition of array :\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("sum[%d][%d]=%d\n",i,j,sum[i][j]);
        }
    }

}