#include <stdio.h>
#include <stddef.h>

// Inverte os elementos de um arranjo in-place utilizando dois indices convergentes
void inverter_arranjo(int arr[], size_t n) {
    if (n == 0) return;
    size_t i = 0;
    size_t j = n - 1;
    while (i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(void) {
    int v[] = {10, 20, 30, 40, 50, 60};
    size_t n = sizeof(v) / sizeof(v[0]);

    inverter_arranjo(v, n);

    for (size_t i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
