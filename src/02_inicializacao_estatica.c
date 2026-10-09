#include <stdio.h>

int main(void) {
    // 1. Inicializacao homogenea
    int num_homog[5] = {0};
    char nome_homog[10] = {'a'};
    double temp_homog[3] = {25.5};

    // 2. Inicializacao parcial (elementos restantes zerados implicitamente)
    int dados_parcial[5] = {10, 20};
    char nome_parcial[10] = {'a', 'b', 'c', 'd', 'e'};

    // 3. Inicializacao completa
    int num_completo[5] = {0, 1, 2, 3, 4};
    char nome_completo[10] = {'a', 'b', 'c', 'd', 'e'};
    double temp_completo[3] = {25.5, 26.5, 27.5};

    // 4. Inferencia de tamanho
    int num_inferido[] = {0, 1, 2, 3, 4};
    size_t n_inferido = sizeof(num_inferido) / sizeof(num_inferido[0]);

    printf("num_homog[0] = %d, num_homog[4] = %d\n", num_homog[0], num_homog[4]);
    printf("dados_parcial[0] = %d, dados_parcial[1] = %d, dados_parcial[2] = %d\n",
           dados_parcial[0], dados_parcial[1], dados_parcial[2]);
    printf("num_completo[4] = %d\n", num_completo[4]);
    printf("Elementos em num_inferido: %zu\n", n_inferido);

    (void)nome_homog;
    (void)temp_homog;
    (void)nome_parcial;
    (void)nome_completo;
    (void)temp_completo;

    return 0;
}
