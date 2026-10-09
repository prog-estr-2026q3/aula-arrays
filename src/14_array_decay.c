#include <stdio.h>

int main(void) {
    int v[3] = {10, 20, 30};
    int *p = v; // 'v' decai automaticamente para &v[0]

    printf("v:     %p\n", (void *)v);
    printf("&v[0]: %p\n", (void *)&v[0]);
    printf("p:     %p\n", (void *)p);

    printf("v[0]:  %d\n", v[0]);
    printf("*p:    %d\n", *p);

    return 0;
}
