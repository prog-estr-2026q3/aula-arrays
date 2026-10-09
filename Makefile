CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic
ASAN_FLAGS = -fsanitize=address -g
DEBUG_FLAGS = -g
LDLIBS = -lm
SRC_DIR = src
BUILD_DIR = build

# Programas individuais validos (exclui o 03 que contem erro proposital de compilacao)
SRCS = $(SRC_DIR)/01_declaracao_arranjos.c \
       $(SRC_DIR)/02_inicializacao_estatica.c \
       $(SRC_DIR)/04_indexacao_acesso.c \
       $(SRC_DIR)/05_iteracao_arranjo.c \
       $(SRC_DIR)/06_leitura_entrada_padrao.c \
       $(SRC_DIR)/07_endereco_arranjo.c \
       $(SRC_DIR)/08_arranjo_deslocamento.c \
       $(SRC_DIR)/09_arranjo_tamanho_sizeof.c \
       $(SRC_DIR)/10_stack_overflow.c \
       $(SRC_DIR)/11_operacoes_ponteiros_arranjo.c \
       $(SRC_DIR)/12_fator_escala_ponteiros.c \
       $(SRC_DIR)/13_iteradores_ponteiros.c \
       $(SRC_DIR)/14_array_decay.c \
       $(SRC_DIR)/15_perda_dimensao_decay.c \
       $(SRC_DIR)/16_absence_bounds_checking.c \
       $(SRC_DIR)/17_decaimento_array_funcao.c \
       $(SRC_DIR)/18_funcao_array_inplace.c \
       $(SRC_DIR)/19_dangling_pointer_retorno.c \
       $(SRC_DIR)/20_funcao_array_saida.c \
       $(SRC_DIR)/21_funcao_array_const.c \
       $(SRC_DIR)/22_inversao_array_inplace.c \
       $(SRC_DIR)/23_remocao_compactacao_inplace.c \
       $(SRC_DIR)/24_frequencia_arranjo_histograma.c \
       $(SRC_DIR)/25_soma_prefixos.c \
       $(SRC_DIR)/26_percurso_por_linhas.c \
       $(SRC_DIR)/27_percurso_por_colunas.c \
       $(SRC_DIR)/28_arranjo_bidimensional_funcao.c \
       $(SRC_DIR)/29_busca_extremos_2d.c \
       $(SRC_DIR)/30_espelhamento_grade_2d.c \
       $(SRC_DIR)/31_transposicao_matriz.c \
       $(SRC_DIR)/32_multiplicacao_matrizes.c

BINS = $(patsubst $(SRC_DIR)/%.c,$(BUILD_DIR)/%,$(SRCS))
ASAN_BIN_16 = $(BUILD_DIR)/16_absence_bounds_checking_asan

all: $(BINS)

# Compilacao com AddressSanitizer para demonstrar violacao de limites
asan-16: $(ASAN_BIN_16)
asan: asan-16

$(ASAN_BIN_16): $(SRC_DIR)/16_absence_bounds_checking.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(ASAN_FLAGS) $< -o $@ $(LDLIBS)

# Alvo para demonstrar erro de compilacao de excesso de inicializadores
erro-03:
	@echo "--- Tentando compilar $(SRC_DIR)/03_inicializacao_excessiva_erro.c (espera-se erro/warning do compilador) ---"
	-$(CC) $(CFLAGS) $(SRC_DIR)/03_inicializacao_excessiva_erro.c -o $(BUILD_DIR)/03_inicializacao_excessiva_erro $(LDLIBS)

$(BUILD_DIR)/%: $(SRC_DIR)/%.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean asan asan-16 erro-03
