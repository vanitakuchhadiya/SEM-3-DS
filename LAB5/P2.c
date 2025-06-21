#include <stdio.h>

int main() {
    int a[3][2], b[2][3], result[3][3];

    printf("Enter elements of first matrix (3x2):\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            printf("a[%d][%d]",i,j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix (2x3):\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            printf("b[%d][%d]",i,j);
            scanf("%d", &b[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            result[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("RAfter multiplication:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}
