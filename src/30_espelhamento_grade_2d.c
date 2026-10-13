#include <stdio.h>
#include <stddef.h>

#define LINHAS 3
#define COLUNAS 4

void espelhar_horizontal_2d(size_t linhas, size_t colunas, int arr[linhas][colunas]) {
    for (size_t i = 0; i < linhas; i++) {
        size_t ini = 0;
        size_t fim = colunas - 1;
        while (ini < fim) {
            int temp = arr[i][ini];
            arr[i][ini] = arr[i][fim];
            arr[i][fim] = temp;
            ini++;
            fim--;
        }
    }
}

int main(void) {
    int grade[LINHAS][COLUNAS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printf("Grade original:\n");
    for (size_t i = 0; i < LINHAS; i++) {
        for (size_t j = 0; j < COLUNAS; j++) {
            printf("%4d", grade[i][j]);
        }
        printf("\n");
    }

    espelhar_horizontal_2d(LINHAS, COLUNAS, grade);

    printf("\nGrade apos espelhamento horizontal:\n");
    for (size_t i = 0; i < LINHAS; i++) {
        for (size_t j = 0; j < COLUNAS; j++) {
            printf("%4d", grade[i][j]);
        }
        printf("\n");
    }

    return 0;
}
