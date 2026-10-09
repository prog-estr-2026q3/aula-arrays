# Exemplos de Código - Arranjos (Arrays)

Este diretório contém todos os exemplos de código-fonte apresentados no Capítulo 04 das notas de aula de Programação Estruturada.

## Estrutura

```
.
├── Makefile
├── README.md
├── .gitignore
├── .devcontainer/   # Configuração de ambiente para Dev Container / Codespaces
├── src/             # Códigos-fonte (.c) dos exemplos
└── build/           # Executáveis compilados (ignorado pelo git)
```

## Compilação

Para compilar todos os programas válidos de uma só vez:

```bash
make
```

Os executáveis serão gerados no diretório `build/`.

Para compilar um programa específico manualmente:

```bash
gcc -std=c11 -Wall -Wextra -pedantic src/08_arranjo_deslocamento.c -o build/08_arranjo_deslocamento -lm
```

Para compilar o exemplo de violação de limites de memória com o AddressSanitizer (ASan):

```bash
make asan
./build/16_absence_bounds_checking_asan
```

Para testar o aviso/erro de compilação pedagógico ao fornecer excesso de elementos na inicialização estática:

```bash
make erro-03
```

Para limpar todos os executáveis gerados:

```bash
make clean
```

## Execução

Após a compilação, execute os programas a partir do diretório raiz do módulo:

```bash
./build/01_declaracao_arranjos
./build/02_inicializacao_estatica
./build/04_indexacao_acesso
./build/05_iteracao_arranjo
./build/07_endereco_arranjo
./build/08_arranjo_deslocamento
./build/09_arranjo_tamanho_sizeof
./build/11_operacoes_ponteiros_arranjo
./build/12_fator_escala_ponteiros
./build/13_iteradores_ponteiros
./build/14_array_decay
./build/15_perda_dimensao_decay
./build/16_absence_bounds_checking
./build/17_decaimento_array_funcao
./build/18_funcao_array_inplace
./build/19_dangling_pointer_retorno
./build/20_funcao_array_saida
./build/21_funcao_array_const
./build/22_inversao_array_inplace
./build/23_remocao_compactacao_inplace
./build/24_frequencia_arranjo_histograma
./build/25_soma_prefixos
./build/26_percurso_por_linhas
./build/27_percurso_por_colunas
./build/28_arranjo_bidimensional_funcao
./build/29_busca_extremos_2d
./build/30_espelhamento_grade_2d
./build/31_transposicao_matriz
./build/32_multiplicacao_matrizes
```

## Relação dos arquivos com o texto das notas de aula

Todos os códigos-fonte estão localizados no diretório `src/`:

1. `src/01_declaracao_arranjos.c`: Declaração de arranjos de diferentes tipos primitivos e ocupação de memória (`lst:declaracao-arranjo`).
2. `src/02_inicializacao_estatica.c`: Técnicas de inicialização estática homogênea, parcial, completa e com inferência de tamanho (`lst:inicializacao-arranjo-homogenea`, `lst:inicializacao-arranjo-parcial`, `lst:inicializacao-arranjo-completa`, `lst:inferencia-tamanho`).
3. `src/03_inicializacao_excessiva_erro.c`: Demonstração pedagógica do erro/aviso de compilação com lista de inicializadores maior do que a capacidade (`lst:inicializacao-arranjo-excessiva`).
4. `src/04_indexacao_acesso.c`: Operador de indexação (subscrito), leitura e modificação de elementos (`lst:operador-indexacao-arranjo`).
5. `src/05_iteracao_arranjo.c`: Percorrimento linear de arranjo com laço `for` e constante de tamanho (`lst:iteracao-arranjo`).
6. `src/06_leitura_entrada_padrao.c`: Leitura de dados da entrada padrão via `scanf` e operador `&` para armazenamento no arranjo (`lst:inicializacao-arranjo-entrada-padrao`).
7. `src/07_endereco_arranjo.c`: Inspeção do identificador como endereço do primeiro elemento e desreferenciação (`lst:endereco-array`).
8. `src/08_arranjo_deslocamento.c`: Inspeção dos endereços de memória e cálculo dos deslocamentos em bytes comprovando a contiguidade (`code:arranjo_deslocamento`).
9. `src/09_arranjo_tamanho_sizeof.c`: Cálculo da capacidade e contagem de elementos usando `sizeof(arr) / sizeof(arr[0])` (`code:arranjo_tamanho`).
10. `src/10_stack_overflow.c`: Demonstração de estouro da pilha de execução (*stack overflow*) por alocação local excessiva (`code:stack_overflow`).
11. `src/11_operacoes_ponteiros_arranjo.c`: Operações válidas na aritmética de ponteiros com arranjos (`p + i`, `q - i`, `p++`, `q - p`, `p < q`).
12. `src/12_fator_escala_ponteiros.c`: Demonstração empírica do fator de escala ao transladar ponteiros de diferentes tipos (`code:fator_escala_ponteiros`).
13. `src/13_iteradores_ponteiros.c`: Iteração sobre arranjos utilizando ponteiros como iteradores (`code:iteradores_ponteiros`).
14. `src/14_array_decay.c`: Decaimento de arranjo para ponteiro (*array decay*) (`code:array_decay_pratico`).
15. `src/15_perda_dimensao_decay.c`: Perda de metadados de dimensão após o decaimento e limites do `sizeof`.
16. `src/16_absence_bounds_checking.c`: Ausência de verificação de limites (*bounds checking*) e detecção de violações com AddressSanitizer (`code:absence_bounds_checking`).
17. `src/17_decaimento_array_funcao.c`: Decaimento de arranjo para ponteiro na passagem para funções e perda do `sizeof` original (`code:decaimento_array_funcao`).
18. `src/18_funcao_array_inplace.c`: Modificação de elementos do arranjo *in-place* por meio de função (`code:funcao_array_inplace`).
19. `src/19_dangling_pointer_retorno.c`: Retorno indevido de endereço de arranjo alocado localmente na pilha (*dangling pointer*) (`code:dangling_pointer`).
20. `src/20_funcao_array_saida.c`: Geração de dados e preenchimento de buffer de destino fornecido pelo chamador (`code:funcao_array_saida`).
21. `src/21_funcao_array_const.c`: Passagem de arranjo como parâmetro somente para leitura com o qualificador `const` e bloqueio estático de modificação (`code:funcao_array_const`).
22. `src/22_inversao_array_inplace.c`: Inversão de arranjo *in-place* utilizando dois índices convergentes (`code:inversao_array_inplace`).
23. `src/23_remocao_compactacao_inplace.c`: Remoção de elementos e compactação *in-place* com índices leitor/escritor (`code:remocao_compactacao_inplace`).
24. `src/24_frequencia_arranjo_histograma.c`: Contagem de frequências e histograma via arranjo como tabela de acesso direto (`code:frequencia_arranjo_histograma`).
25. `src/25_soma_prefixos.c`: Cálculo de soma acumulada de prefixos (*prefix sums*) para consultas imediatas de subintervalos (`code:soma_prefixos`).
26. `src/26_percurso_por_linhas.c`: Percurso de arranjo bidimensional por linhas com laços aninhados e agregação por linha (`code:percurso_por_linhas`).
27. `src/27_percurso_por_colunas.c`: Percurso de arranjo bidimensional por colunas com inversão de laços e agregação por coluna (`code:percurso_por_colunas`).
28. `src/28_arranjo_bidimensional_funcao.c`: Passagem de arranjo bidimensional como parâmetro de função com dimensão de colunas fixa (`code:arranjo_bidimensional_funcao`).
29. `src/29_busca_extremos_2d.c`: Busca e localização de valor extremo com coordenadas $(i, j)$ em grade bidimensional (`code:busca_extremos_2d`).
30. `src/30_espelhamento_grade_2d.c`: Espelhamento horizontal *in-place* em grade bidimensional (`code:espelhamento_grade_2d`).
31. `src/31_transposicao_matriz.c`: Transposição de matriz retangular da Álgebra Linear ($A^T$) (`code:transposicao_matriz`).
32. `src/32_multiplicacao_matrizes.c`: Multiplicação de matrizes ($C = A \times B$) da Álgebra Linear (`code:multiplicacao_matrizes`).
