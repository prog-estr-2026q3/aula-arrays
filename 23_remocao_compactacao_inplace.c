#include <stdio.h>
#include <stddef.h>

// Remove todas as ocorrencias de 'alvo' in-place utilizando dois indices (leitor/escritor).
// Retorna o novo tamanho logico (size) do arranjo.
size_t remover_elemento(int arr[], size_t size, int alvo) {
    size_t k = 0; // Indice de escrita (elementos preservados)
    for (size_t i = 0; i < size; i++) {
        if (arr[i] != alvo) {
            arr[k++] = arr[i];
        }
    }
    return k;
}

int main(void) {
    int v[] = {3, 1, 4, 3, 2, 5};
    size_t capacity = sizeof(v) / sizeof(v[0]);
    size_t size = capacity;

    printf("Antes  (size = %zu, capacity = %zu): ", size, capacity);
    for (size_t i = 0; i < size; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    size = remover_elemento(v, size, 3); // Reduz o tamanho logico

    printf("Depois (size = %zu, capacity = %zu): ", size, capacity);
    for (size_t i = 0; i < size; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
