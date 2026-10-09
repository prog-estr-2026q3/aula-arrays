#include <stdio.h>

int main(void) {
    // Erro de compilacao proposital:
    // A lista de inicializadores possui 6 elementos, enquanto a capacidade do arranjo e 5.
    int numeros[5] = {0, 1, 2, 3, 4, 5};

    printf("%d\n", numeros[0]);
    return 0;
}
