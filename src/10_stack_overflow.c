#include <stdio.h>

int main(void) {
    // Alocacao excessiva na pilha de execucao (stack overflow proposital):
    // 2.500.000 * 4 bytes = ~10 MB, excedendo o limite tipico de 8 MB da stack.
    int v[2500000];
    v[0] = 42;
    printf("%d\n", v[0]);
    return 0;
}
