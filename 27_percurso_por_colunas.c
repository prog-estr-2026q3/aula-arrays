#include <stdio.h>
#include <stddef.h>

#define ALUNOS 3
#define AVALIACOES 4

int main(void) {
    int notas[ALUNOS][AVALIACOES] = {
        {8, 7, 9, 8},   // Aluno 0
        {5, 6, 6, 7},   // Aluno 1
        {9, 9, 10, 9}   // Aluno 2
    };

    printf("Percurso por colunas (calculo da media de cada avaliacao):\n");
    for (size_t j = 0; j < AVALIACOES; j++) {
        int soma = 0;
        printf("Avaliacao %zu: ", j);
        for (size_t i = 0; i < ALUNOS; i++) {
            printf("%2d ", notas[i][j]);
            soma += notas[i][j];
        }
        double media = (double)soma / ALUNOS;
        printf("| Soma = %2d | Media = %.2f\n", soma, media);
    }

    return 0;
}
