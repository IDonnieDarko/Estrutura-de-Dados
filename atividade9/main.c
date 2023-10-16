#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(int argc, char* argv[]) {
    No* lista_nao_ordenada = no(0.0, NULL); // Lista não ordenada
    No* lista_ordenada = no(0.0, NULL); // Lista ordenada

    FILE* arquivo = fopen("1kk_rand_float.csv", "r");
    if (arquivo == NULL) {
        printf("Falha ao abrir o arquivo.\n");
        return 1;
    }

    float valor;
    while (fscanf(arquivo, "%f", &valor) == 1) {
        No* novo_no = no(valor, NULL);
        lista_inserir_no(lista_nao_ordenada, novo_no); // Insere na lista não ordenada
        lista_inserir_no_ordenado(lista_ordenada, novo_no); // Insere na lista ordenada
    }

    fclose(arquivo);

    // Resto do código para calcular o tempo médio de inserção e fazer a comparação.

    return 0;
}
