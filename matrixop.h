#ifndef MATRIX_OP_H
#define MATRIX_OP_H

#define SIZE 3

void mat_add(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]);
void mat_sub(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]);
void mat_mulelm(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]);
void mat_mul(int A[SIZE][SIZE],int B[SIZE][SIZE],int R[SIZE][SIZE]);
void mat_transpose(int A[SIZE][SIZE],int R[SIZE][SIZE]);
int mat_det(int A[SIZE][SIZE]);
void mat_adjoint(int A[SIZE][SIZE],int R[SIZE][SIZE]);
int  mat_inverse(int A[SIZE][SIZE],double R[SIZE][SIZE]);

void mat_print(int A[SIZE][SIZE]);
void mat_print_double(double A[SIZE][SIZE]);
   

  
#endif
