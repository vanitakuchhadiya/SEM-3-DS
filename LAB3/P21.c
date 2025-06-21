// . Read n numbers in an array then read two different numbers, replace 1st
// number with 2nd number in an array and print its index and final array.
#include <stdio.h>

int main() {
    int n, i, num1, num2;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be replaced: ");
    scanf("%d", &num1);

    printf("Enter the new number: ");
    scanf("%d", &num2);

    printf("Replaced at index: ");
    int found = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] == num1) {
            arr[i] = num2;
            printf("%d ", i);
            found = 1;
        }
    }

    if(!found) {
        printf("None");
    }

    printf("\nFinal array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
