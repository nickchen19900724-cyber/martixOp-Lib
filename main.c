#include <stdio.h>
#include "matrixop.h"

int main(void)
{
    int A[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int B[SIZE][SIZE] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
int R[SIZE][SIZE];

printf("A + B =\n");
mat_add(A, B, R);
mat_print(R);
printf("A - B =\n");
    mat_sub(A, B, R);
    mat_print(R);

    printf("\n");

     printf("A mulelm B =\n");
    mat_mulelm(A, B, R);
    mat_print(R);

    printf("\n");
    printf("A mul B =\n");
    mat_mul(A, B, R);
    mat_print(R);

    printf("\n");

    printf("A transpose =\n");
    mat_transpose(A,R);
    mat_print(R);

    printf("\nDeterminant of C = %d\n", mat_det(C));

    printf("\n");

    printf("\nAdjoint of C =\n");
    mat_adjoint(C, R);
    mat_print(R);

    printf("\nInverse of C =\n");
    if (mat_inverse(C, Inv)) {
        mat_print_double(Inv);
    } else {
        printf("C is not invertible (det = 0)\n");
    }


    return 0;


}