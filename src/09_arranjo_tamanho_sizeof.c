#include <stdio.h>
#include <stddef.h>

int main(void) {
    int arr[4] = {10, 20, 30, 40};
    size_t n = sizeof(arr) / sizeof(arr[0]);

    printf("Tamanho total do arranjo: %zu bytes\n", sizeof(arr));
    printf("Tamanho de cada elemento: %zu bytes\n", sizeof(arr[0]));
    printf("Quantidade de elementos:  %zu\n", n);

    return 0;
}
