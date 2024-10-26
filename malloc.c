#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[2][2];
    int B[2][2];
    int c[2][2]={{0,0},{0,0}};

  
/*
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
*/

    //Using Pointers and Array
    int **ptr1, *ptr2, *ptr3;
    
     ptr1 =(int**) malloc((2 * sizeof(int*));
     
     for(i=0;i<i=
    
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
    
    for (int i = 0; i < 2; i++) {
        
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                //c[i][j]+=A[i][k]*B[k][j];
                
                ptr1= &A[i][k];
                ptr2= &B[k][j];
                ptr= &c[i][j];
                (*ptr)+=(*ptr1)*(*ptr2);
                
                
        }
        printf("C[%d][%d]: %d    ", i, j, *ptr);
    }
    printf("\n");
    }
    
    return 0;
}