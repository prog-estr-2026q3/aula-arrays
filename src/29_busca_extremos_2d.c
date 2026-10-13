#include <stdio.h>
#include <stddef.h>

#define LINHAS 3
#define COLUNAS 4

void encontrar_maximo_2d(size_t linhas, size_t colunas,
                         const int arr[linhas][colunas],
                         int *max_valor, size_t *max_lin, size_t *max_col) {
    *max_valor = arr[0][0];
    *max_lin = 0;
    *max_col = 0;

    for (size_t i = 0; i < linhas; i++) {
        for (size_t j = 0; j < colunas; j++) {
            if (arr[i][j] > *max_valor) {
                *max_valor = arr[i][j];
                *max_lin = i;
                *max_col = j;
            }
        }
    }
}

int main(void) {
    const int mapa[LINHAS][COLUNAS] = {
        {12, 45, 23, 19},
        {34, 89, 67, 42},
        {55, 78, 31, 95}
    };

    int valor;
    size_t lin, col;

    encontrar_maximo_2d(LINHAS, COLUNAS, mapa, &valor, &lin, &col);

    printf("Valor maximo encontrado: %d na posicao [%zu][%zu]\n", valor, lin, col);

    return 0;
}
