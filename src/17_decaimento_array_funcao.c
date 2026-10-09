#include <stdio.h>
#include <stddef.h>

void processar(int arr[], size_t n) {
    (void)n;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wsizeof-array-argument"
    printf("Tamanho do array na funcao: %zu\n", sizeof(arr));
#pragma GCC diagnostic pop
}

int main(void) {
    int v[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(v) / sizeof(v[0]);
    printf("Tamanho do array na main: %zu\n", sizeof(v));
    processar(v, n);
    return 0;
}
