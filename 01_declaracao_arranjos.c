#include <stdio.h>

int main(void) {
    // Declara um arranjo de 5 inteiros
    int notas[5];

    // Declara um arranjo de 10 caracteres
    char nome[10];

    // Declara um arranjo de 3 doubles
    double temperatures[3];

    // Declara um arranjo de 4 inteiros
    int numeros[4];

    printf("sizeof(notas):        %zu bytes\n", sizeof(notas));
    printf("sizeof(nome):         %zu bytes\n", sizeof(nome));
    printf("sizeof(temperatures): %zu bytes\n", sizeof(temperatures));
    printf("sizeof(numeros):      %zu bytes\n", sizeof(numeros));

    return 0;
}
