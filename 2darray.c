#include <stdio.h>

int main() {
    int A[2][2];
    int B[2][2];
    int c[2][2]={{0,0},{0,0}};

    //Input Array A
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("A[%d][%d]:   ", i, j);
            scanf("%d", &A[i][j]);
        }
        
    }

    printf("\n");
    
    //Input Array B
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("B[%d][%d]:   ", i, j);
            scanf("%d", &B[i][j]);
        }
        
    }
    
printf("\n");

// Multiplication of Arrays
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                c[i][j]+=A[i][k]*B[k][j];
        }
        printf("C[%d][%d]: %d    ", i, j, c[i][j]);
    }
    printf("\n");
    }
    return 0;
}