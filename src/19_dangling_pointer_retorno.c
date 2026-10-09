#include <stdio.h>

int* criar_arranjo(void) {
    int local[3] = {10, 20, 30};
    // GCC emite aviso [-Wreturn-local-addr] e, por seguranca defensiva,
    // pode neutralizar o retorno atribuindo NULL para evitar leitura cega.
    return local;
}

int main(void) {
    int *p = criar_arranjo();

    // A tentativa de desreferenciar um ponteiro pendente resulta em falha
    // de segmentacao (Segmentation fault) ou leitura de dados corrompidos.
    printf("p[0]: %d\n", p[0]);

    return 0;
}
