#include <stdio.h>

int main(void) {
    int numeros[5] = {0, 1, 2, 3, 4};

    // Acessando e imprimindo elementos do arranjo
    printf("%d\n", numeros[1]); // Imprime o segundo elemento
    printf("%d\n", numeros[3]); // Imprime o quarto elemento

    // Acessando e modificando elementos do arranjo
    numeros[0] = 10; // Modifica o primeiro elemento
    numeros[4] = 40; // Modifica o ultimo elemento

    // Acessando e imprimindo elementos do arranjo apos alteracao
    printf("%d\n", numeros[1]); // Imprime o segundo elemento
    printf("%d\n", numeros[3]); // Imprime o quarto elemento
    printf("%d\n", numeros[0]); // Imprime o primeiro elemento modificado
    printf("%d\n", numeros[4]); // Imprime o ultimo elemento modificado

    return 0;
}
