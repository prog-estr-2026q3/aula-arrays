#include <stdio.h>
#include <stddef.h>

int main(void) {
    int numeros[3] = {10, 20, 30};

    for (size_t i = 0; i < 3; i++) {
        printf("numeros[%zu] = %d  |  Endereco: %p  |  Deslocamento: +%zu bytes\n",
               i, numeros[i], (void*)&numeros[i], i * sizeof(numeros[0]));
    }

    return 0;
}
