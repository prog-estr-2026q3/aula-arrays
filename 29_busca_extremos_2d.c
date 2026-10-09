#include <stdio.h>
#include <stddef.h>

#define LINHAS 3
#define COLUNAS 4

void encontrar_maximo_2d(const int arr[][COLUNAS], size_t linhas,
                         int *max_valor, size_t *max_lin, size_t *max_col) {
    *max_valor = arr[0][0];
    *max_lin = 0;
    *max_col = 0;

    for (size_t i = 0; i < linhas; i++) {
        for (size_t j = 0; j < COLUNAS; j++) {
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

    encontrar_maximo_2d(mapa, LINHAS, &valor, &lin, &col);

    printf("Valor maximo encontrado: %d na posicao [%zu][%zu]\n", valor, lin, col);

    return 0;
}
