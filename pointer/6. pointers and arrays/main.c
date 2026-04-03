//pointers and arrays
#include <stdio.h>

int main() {
    int A[] = {2, 4, 5, 8, 1}; //5 * 4 = 20 bytes
    int *p = A;
    /*
    A++; //invalid
    p++; //valid
    */
    printf("%d\n", A);
    printf("%d\n", *A);
    printf("%d\n", A + 1);
    printf("%d\n", *(A + 1));
    /*
    element at index i --
        Address - &A[i] or (A+i)
        Value - A[i] or *(A+i)
        A - gives base address
    */
    return 0;
}