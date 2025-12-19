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
void mat_sub(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]){
    for (int i = 0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
             R[i][j] = A[i][j] - B[i][j];
        }
    }
}
void mat_mulelm(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]){
    for (int i = 0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
             R[i][j] = A[i][j] * B[i][j];
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

void mat_mul(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]){
    for (int i = 0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            int sum = 0;
            for (int k = 0; k < SIZE; k++) {  
                sum += A[i][k] * B[k][j];
            }
            R[i][j] = sum;
        }
    }   
}

void mat_transpose(int A[SIZE][SIZE],int R[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R[j][i] = A[i][j];
        }
    }
}

int mat_det(int A[SIZE][SIZE]){
    int a = A[0][0], b = A[0][1], c = A[0][2];
    int d = A[1][0], e = A[1][1], f = A[1][2];
    int g = A[2][0], h = A[2][1], i = A[2][2];

    int det = a * (e * i - f * h)
            - b * (d * i - f * g)
            + c * (d * h - e * g);

    return det;
}

void mat_adjoint(int A[SIZE][SIZE],int R[SIZE][SIZE]){
    int a = A[0][0], b = A[0][1], c = A[0][2];
    int d = A[1][0], e = A[1][1], f = A[1][2];
    int g = A[2][0], h = A[2][1], i = A[2][2];

    int C00 =  (e * i - f * h);
    int C01 = -(d * i - f * g);
    int C02 =  (d * h - e * g);

    int C10 = -(b * i - c * h);
    int C11 =  (a * i - c * g);
    int C12 = -(a * h - b * g);

    int C20 =  (b * f - c * e);
    int C21 = -(a * f - c * d);
    int C22 =  (a * e - b * d);

    R[0][0] = C00;  R[0][1] = C10;  R[0][2] = C20;
    R[1][0] = C01;  R[1][1] = C11;  R[1][2] = C21;
    R[2][0] = C02;  R[2][1] = C12;  R[2][2] = C22;
}

int mat_inverse(int A[SIZE][SIZE],double R[SIZE][SIZE]){
    int det = mat_det(A);
    if (det == 0) {
        return 0;
    }

    int adj[SIZE][SIZE];
    mat_adjoint(A, adj); 

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            R[i][j] = (double)adj[i][j] / (double)det;
        }
    }

    return 1;
}

void mat_print_double(double A[SIZE][SIZE]){
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%8.3f ", A[i][j]);
        }
        printf("\n");
    }
}