#include <stdio.h>
#include <stddef.h>

#define LINHAS  2
#define COLUNAS 3

void transpor_matriz(const int A[][COLUNAS], int At[][LINHAS], size_t linhas, size_t colunas) {
    for (size_t i = 0; i < linhas; i++) {
        for (size_t j = 0; j < colunas; j++) {
            At[j][i] = A[i][j];
        }
    }
}

int main(void) {
    const int A[LINHAS][COLUNAS] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int At[COLUNAS][LINHAS] = {0};

    transpor_matriz(A, At, LINHAS, COLUNAS);

    printf("Matriz original A (%dx%d):\n", LINHAS, COLUNAS);
    for (size_t i = 0; i < LINHAS; i++) {
        for (size_t j = 0; j < COLUNAS; j++) {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta At (%dx%d):\n", COLUNAS, LINHAS);
    for (size_t i = 0; i < COLUNAS; i++) {
        for (size_t j = 0; j < LINHAS; j++) {
            printf("%2d ", At[i][j]);
        }
        printf("\n");
    }

    return 0;
}
