#include <stdio.h>
#include <stddef.h>

// Pre-computa as somas acumuladas de prefixos em uma unica passagem
void calcular_prefixos(const int arr[], size_t n, int pref[]) {
    if (n == 0) return;
    pref[0] = arr[0];
    for (size_t i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + arr[i];
    }
}

// Responde a soma no subintervalo [l, r] de forma imediata (apenas uma subtracao)
int soma_intervalo(const int pref[], size_t l, size_t r) {
    if (l == 0) return pref[r];
    return pref[r] - pref[l - 1];
}

int main(void) {
    // Faturamento diario em milhares de R$ ao longo de 6 dias
    int vendas[] = {2, 4, 1, 7, 5, 3};
    size_t n = sizeof(vendas) / sizeof(vendas[0]);
    int pref[6];

    calcular_prefixos(vendas, n, pref);

    // Faturamento entre os dias 1 e 4: 4 + 1 + 7 + 5 = 17
    printf("Faturamento dias [1, 4]: %d mil\n", soma_intervalo(pref, 1, 4));
    // Faturamento acumulado nos primeiros 3 dias (dias 0 a 2): 2 + 4 + 1 = 7
    printf("Faturamento dias [0, 2]: %d mil\n", soma_intervalo(pref, 0, 2));

    return 0;
}
