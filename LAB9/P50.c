// WAP to get and print the array elements using Pointer.
#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    printf("enter number of elements:");
    scanf("%d",&n);
    
    int *arr =(int *)malloc (n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",arr +i);
    }
    for(int i=0;i<n;i++){
        printf("arr[%d]=%d\n", i ,*(arr +i)  );
    }
}