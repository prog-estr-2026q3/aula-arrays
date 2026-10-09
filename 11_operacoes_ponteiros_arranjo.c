#include <stdio.h>
#include <stddef.h>

int main(void) {
    int v[5] = {10, 20, 30, 40, 50};
    int *p = &v[0]; // Aponta para o primeiro elemento (v[0])
    int *q = &v[3]; // Aponta para o quarto elemento (v[3])

    printf("p: %p\n", (void *)p);
    printf("q: %p\n", (void *)q);

    // 1. Adicao com inteiro (p + i)
    printf("\n--- Adicao de ponteiro com inteiro ---\n");
    printf("p:        %p\n", (void *)p);
    printf("p + 2:    %p\n", (void *)(p + 2));
    printf("*(p + 2): %d\n", *(p + 2));
    printf("v[2]:     %d\n", v[2]);

    // 2. Subtracao por inteiro (q - i)
    printf("\n--- Subtracao de ponteiro por inteiro ---\n");
    printf("q:        %p\n", (void *)q);
    printf("q - 1:    %p\n", (void *)(q - 1));
    printf("*(q - 1): %d\n", *(q - 1));
    printf("v[2]:     %d\n", v[2]);

    // 3. Incremento e decremento
    printf("\n--- Incremento e decremento ---\n");
    p++; // Avanca para v[1]
    printf("p:    %p\n", (void *)p);
    printf("*p:   %d\n", *p);
    printf("v[1]: %d\n", v[1]);

    p--; // Retorna para v[0]
    printf("p:    %p\n", (void *)p);
    printf("*p:   %d\n", *p);
    printf("v[0]: %d\n", v[0]);

    // 4. Subtracao entre dois ponteiros (q - p)
    printf("\n--- Subtracao entre dois ponteiros ---\n");
    printf("q:     %p\n", (void *)q);
    printf("p:     %p\n", (void *)p);
    printf("q - p: %td\n", q - p);

    // 5. Comparacoes relacionais
    printf("\n--- Comparacoes relacionais ---\n");
    printf("p < q:  %d\n", p < q);
    printf("p == q: %d\n", p == q);

    return 0;
}
