#include <stdio.h>

int main(void) {
    const int ARRAY_SIZE = 5;
    int numeros[5] = {0, 1, 2, 3, 4};

    // Iterando sobre os elementos do arranjo
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
