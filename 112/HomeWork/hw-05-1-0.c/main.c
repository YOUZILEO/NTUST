#include <stdio.h>
#include <stdlib.h>

#define ROWS 6
#define COLS 8

int main() {
    // Define a 2D array A
    int A[ROWS][COLS];

    // Define a pointer p pointing to the first element of A
    int *p = &A[0][0];

    // 1. Using A[i][j]
    printf("Using A[i][j]:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            A[i][j] = (i + 1) * (j + 1);
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Size of A[i][j]: %lu bytes\n\n", sizeof(A));

    // 2. Using *(*(p+i)+j)
    printf("Using *(*(p+i)+j):\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            *(p + i * COLS + j) = (i + 1) * (j + 1);
            printf("%3d ",(*(p + i) + j));
        }
        printf("\n");
    }
    printf("Size of *(*(p+i)+j): %lu bytes\n\n", sizeof(*p));
    // 3. Using *(p+MaxN*i+j) with double 'for' loops
    printf("Using *(p+MaxN*i+j) with double 'for' loops:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            *(p + ROWS * i + j) = (i + 1) * (j + 1);
            printf("%3d ", *(p + ROWS * i + j));
        }
        printf("\n");
    }
    printf("Size of *(p+MaxN*i+j): %lu bytes\n\n", sizeof(*(p + ROWS * COLS)));

    // 4. Using *(p+i) with a single 'for' loop
    printf("Using *(p+i) with a single 'for' loop:\n");
    for (int i = 0; i < ROWS * COLS; i++) {
        *(p + i) = ((i / COLS) + 1) * ((i % COLS) + 1);
        printf("%3d ", *(p + i));
        if ((i + 1) % COLS == 0)
            printf("\n");
    }
    printf("Size of *(p+i): %lu bytes\n\n", sizeof(*(p)));

    return 0;
}
