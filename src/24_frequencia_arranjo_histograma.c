#include <stdio.h>
#include <stddef.h>

#define NOTA_MAX 10

// Contagem de frequencias utilizando o valor como indice direto (tabela de mapeamento direto)
void contar_frequencias(const int notas[], size_t n, int freq[], size_t max_val) {
    for (size_t i = 0; i <= max_val; i++) {
        freq[i] = 0;
    }
    for (size_t i = 0; i < n; i++) {
        if (notas[i] >= 0 && (size_t)notas[i] <= max_val) {
            freq[notas[i]]++;
        }
    }
}

int main(void) {
    int notas[] = {7, 5, 8, 7, 10, 5, 7, 9};
    size_t n = sizeof(notas) / sizeof(notas[0]);
    int freq[NOTA_MAX + 1];

    contar_frequencias(notas, n, freq, NOTA_MAX);

    for (int i = 0; i <= NOTA_MAX; i++) {
        if (freq[i] > 0) {
            printf("Nota %d: %d vez(es)\n", i, freq[i]);
        }
    }

    return 0;
}
