#include <stdio.h>
#include <stddef.h>

double calcular_media(const int arr[], size_t n) {
    if (n == 0) return 0.0;
    int soma = 0;
    for (size_t i = 0; i < n; i++) {
        soma += arr[i];
    }
    return (double)soma / n;
}

void tentar_modificar(const int arr[], size_t n) {
    (void)arr;
    if (n > 0) {
        // Descomentar a linha abaixo gera erro de compilacao:
        // arr[0] = 0; // assignment of read-only location 'arr[0]'
    }
}

int main(void) {
    int notas[] = {7, 8, 9, 10};
    size_t n = sizeof(notas) / sizeof(notas[0]);

    printf("Media: %.2f\n", calcular_media(notas, n));
    tentar_modificar(notas, n);
    return 0;
}
