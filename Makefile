CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic
ASAN_FLAGS = -fsanitize=address -g
DEBUG_FLAGS = -g
LDLIBS = -lm
BUILD_DIR = build

# Programas individuais validos (exclui o 03 que contem erro proposital de compilacao)
SRCS = 01_declaracao_arranjos.c \
       02_inicializacao_estatica.c \
       04_indexacao_acesso.c \
       05_iteracao_arranjo.c \
       06_leitura_entrada_padrao.c \
       07_endereco_arranjo.c \
       08_arranjo_deslocamento.c \
       09_arranjo_tamanho_sizeof.c \
       10_stack_overflow.c \
       11_operacoes_ponteiros_arranjo.c \
       12_fator_escala_ponteiros.c \
       13_iteradores_ponteiros.c \
       14_array_decay.c \
       15_perda_dimensao_decay.c \
       16_absence_bounds_checking.c \
       17_decaimento_array_funcao.c \
       18_funcao_array_inplace.c \
       19_dangling_pointer_retorno.c \
       20_funcao_array_saida.c \
       21_funcao_array_const.c \
       22_inversao_array_inplace.c \
       23_remocao_compactacao_inplace.c \
       24_frequencia_arranjo_histograma.c \
       25_soma_prefixos.c \
       26_percurso_por_linhas.c \
       27_percurso_por_colunas.c \
       28_arranjo_bidimensional_funcao.c \
       29_busca_extremos_2d.c \
       30_espelhamento_grade_2d.c \
       31_transposicao_matriz.c \
       32_multiplicacao_matrizes.c

BINS = $(SRCS:%.c=$(BUILD_DIR)/%)
ASAN_BIN_16 = $(BUILD_DIR)/16_absence_bounds_checking_asan

all: $(BINS)

# Compilacao com AddressSanitizer para demonstrar violacao de limites
asan-16: $(ASAN_BIN_16)
asan: asan-16

$(ASAN_BIN_16): 16_absence_bounds_checking.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(ASAN_FLAGS) $< -o $@ $(LDLIBS)

# Alvo para demonstrar erro de compilacao de excesso de inicializadores
erro-03:
	@echo "--- Tentando compilar 03_inicializacao_excessiva_erro.c (espera-se erro/warning do compilador) ---"
	-$(CC) $(CFLAGS) 03_inicializacao_excessiva_erro.c -o $(BUILD_DIR)/03_inicializacao_excessiva_erro $(LDLIBS)

$(BUILD_DIR)/%: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean asan asan-16 erro-03
