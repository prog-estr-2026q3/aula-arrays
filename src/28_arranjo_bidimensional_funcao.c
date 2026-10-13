#include <stdio.h>
#include <stddef.h>

// A dimensao de colunas e fixada na assinatura da funcao
// para que o compilador possa calcular o salto de linha: (i * 4 + j).
void imprimir_arranjo_2d(const int arr[][4], size_t linhas) {
    for (size_t i = 0; i < linhas; i++) {
        for (size_t j = 0; j < 4; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    const size_t linhas = 3;
    const int arr[][4] = {
        {10, 11, 12, 13},
        {20, 21, 22, 23},
        {30, 31, 32, 33}
    };

    printf("Elementos do arranjo bidimensional (%zu x 4):\n", linhas);
    imprimir_arranjo_2d(arr, linhas);

    return 0;
}
