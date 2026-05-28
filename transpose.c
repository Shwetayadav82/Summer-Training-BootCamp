#include<stdio.h>

int main() {
    int a[3][2], transpose[2][3];
    int i, j;

    // Input matrix elements
    printf("Enter elements of 3x2 matrix:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding transpose
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Display original matrix
    printf("\nOriginal Matrix:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Display transpose matrix
    printf("\nTranspose Matrix:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}