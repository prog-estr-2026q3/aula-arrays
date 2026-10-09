#include <stdio.h>

int main(void) {
    int numeros[] = {10, 20, 30};

    // Acessando e imprimindo o endereco do array
    printf("%p\n", (void *)numeros);  // Imprime o endereco do array (decaimento para &numeros[0])
    printf("%d\n", *numeros);          // Imprime o valor do primeiro elemento (*numeros == numeros[0])

    return 0;
}
