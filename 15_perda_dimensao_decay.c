#include <stdio.h>

int main(void) {
    int v[] = {10, 20, 30, 40, 50};
    int *p = v; // arranjo 'v' decai para ponteiro

    printf("sizeof(v): %zu bytes\n", sizeof(v));
    printf("sizeof(p): %zu bytes\n", sizeof(p));

    return 0;
}
