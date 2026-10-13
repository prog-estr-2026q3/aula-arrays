#include <stdio.h>
#include <stddef.h>

#define M 2
#define K 3
#define N 2

void multiplicar_matrizes(size_t m, size_t k, size_t n,
                          const int A[m][k], const int B[k][n], int C[m][n]) {
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            C[i][j] = 0;
            for (size_t p = 0; p < k; p++) {
                C[i][j] += A[i][p] * B[p][j];
            }
        }
    }
}

int main(void) {
    const int A[M][K] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    const int B[K][N] = {
        {7, 8},
        {9, 1},
        {2, 3}
    };
    int C[M][N];

    multiplicar_matrizes(M, K, N, A, B, C);

    printf("Matriz resultante C = A * B (%dx%d):\n", M, N);
    for (size_t i = 0; i < M; i++) {
        for (size_t j = 0; j < N; j++) {
            printf("%3d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
