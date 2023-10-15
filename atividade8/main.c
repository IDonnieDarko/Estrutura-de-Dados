#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[]) {
    No* n0 = no('C', NULL);
    No* n1 = no('E', NULL);
    No* n2 = no('A', no('D', no('B', no('X', no('Z', NULL))));
    No* n3 = no('U', NULL);
    lista_inserir_no(n0, n2);
    lista_inserir_no(n0, n1);
    lista_inserir_no(n0, n3);
    printf("Lista original: ");
    lista_imprimir(n0);
    printf("\nQuantidade de nós: %d\n", lista_quantidade_nos(n0));

    No* n_copia = lista_copiar(n0);
    printf("Cópia da lista: ");
    lista_imprimir(n_copia);

    printf("\nImprimir lista inversa: ");
    lista_imprimir_inversa(n0);

    printf("\n\nInserir novo nó na posição 2:\n");
    lista_inserir_no_i(n0, 2);
    lista_imprimir(n0);

    printf("\n\nRemover nó da posição 2:\n");
    lista_remover_no_i(n0, 2);
    lista_imprimir(n0);

    char valor_busca = 'D';
    printf("\n\nRemover nós com valor '%c':\n", valor_busca);
    lista_remover_no(n0, valor_busca);
    lista_imprimir(n0);

    printf("\n\nVerificar existência do valor '%c': %d\n", valor_busca, lista_verificar_existencia(n0, valor_busca));

    char valor_busca2 = 'E';
    printf("Quantidade de ocorrências do valor '%c': %d\n", valor_busca2, lista_verificar_ocorrencias(n0, valor_busca2));

    lista_liberar(n0);
    n0 = NULL;
    printf("\nLista após liberar memória: ");
    lista_imprimir(n0);

    return 0;
}
