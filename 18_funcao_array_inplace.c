#include <stdio.h>
#include <stddef.h>

void dobrar_valores(int arr[], size_t n) {
    for (size_t i = 0; i < n; i++) {
        arr[i] *= 2;
    }
}

int main(void) {
    int valores[3] = {10, 20, 30};

    printf("Antes: ");
    for (size_t i = 0; i < 3; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    dobrar_valores(valores, 3);

    printf("Depois: ");
    for (size_t i = 0; i < 3; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    return 0;
}
