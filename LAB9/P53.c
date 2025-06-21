// WAP to sort the array elements using Pointer.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int *arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (*(arr+i) > *(arr+j + 1)) {
                temp = *(arr+j) ;
                *(arr+j) = *(arr+j + 1);
                *(arr+j + 1) = temp;
            }
        }
    }
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ",*(arr+i));
    }

}