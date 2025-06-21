// WAP to calculate the sum of n numbers using Pointer
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("arr[%d]=",i);
        scanf("%d", ptr + i); 
        sum += *(ptr + i);
    }

    printf("Sum of array elements = %d\n", sum);
}