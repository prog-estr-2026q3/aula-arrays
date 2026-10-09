#include <stdio.h>
#include <stddef.h>

#define LINHAS  3
#define COLUNAS 4

// A dimensao de colunas e obrigatoria na assinatura da funcao
// para que o compilador possa calcular o salto de linha: (i * COLUNAS + j).
void imprimir_arranjo_2d(const int arr[][COLUNAS], size_t linhas) {
    for (size_t i = 0; i < linhas; i++) {
        for (size_t j = 0; j < COLUNAS; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    const int arr[LINHAS][COLUNAS] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33}
    };

    printf("Elementos do arranjo bidimensional (%d x %d):\n", LINHAS, COLUNAS);
    imprimir_arranjo_2d(arr, LINHAS);

    return 0;
}
