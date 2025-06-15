// WAP to print Armstrong number from 1 to 1000
#include <stdio.h>
#include <math.h>

int main() {
    int num, rem, result, n, digits;

    printf("Armstrong numbers between 1 and 1000 are:\n");

    for(num = 1; num <= 1000; num++) {
        result = 0;

        n = num;
        digits = 0;
        while(n != 0) {
            n =n/10;
            digits++;
        }

        n = num;
        while(n != 0) {
            rem = n % 10;
            result += pow(rem, digits);
            n /= 10;
        }

        if(result == num) {
            printf("%d\n", num);
        }
    }
}
