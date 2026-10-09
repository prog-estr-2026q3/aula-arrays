#include <stdio.h>
#include <stddef.h>

// Copia apenas os numeros pares de 'src' para 'dest' com protecao contra estouro de capacidade
size_t filtrar_pares(const int src[], size_t n, int dest[], size_t cap) {
    size_t count = 0;
    for (size_t i = 0; i < n && count < cap; i++) {
        if (src[i] % 2 == 0) {
            dest[count++] = src[i];
        }
    }
    return count;
}

int main(void) {
    int dados[] = {1, 2, 3, 4, 5, 6};
    int pares[6]; // Buffer de destino fornecido pelo chamador

    size_t n_pares = filtrar_pares(dados, 6, pares, 6);

    for (size_t i = 0; i < n_pares; i++) {
        printf("%d ", pares[i]);
    }
    printf("\n");

    return 0;
}
