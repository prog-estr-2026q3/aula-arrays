#include <stdio.h>

int main(void) {
    const int ARRAY_SIZE = 5;
    int numeros[5];

    // Lendo valores da entrada padrao e armazenando no arranjo
    printf("Digite 5 numeros:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (scanf("%d", &numeros[i]) != 1) {
            fprintf(stderr, "Erro na leitura do elemento %d\n", i);
            return 1;
        }
    }

    // Imprimindo os elementos do arranjo
    printf("Os numeros digitados foram: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}
