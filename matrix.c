#include <stdio.h>
#include "matrixop.h"

void mat_add(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R[i][j] = A[i][j] + B[i][j];
        }
    }
}

void mat_print(int A[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%5d ", A[i][j]);
        }
        printf("\n");
    }
}