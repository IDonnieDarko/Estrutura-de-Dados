#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *criarPilha(int tamanho) {
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->itens = (int *)malloc(tamanho * sizeof(int));
    p->tamanho = tamanho;
    p->topo = -1;
    return p;
}

void empilhar(Pilha *p, int valor) {
    if (p->topo < p->tamanho - 1) {
        p->topo++;
        p->itens[p->topo] = valor;
    } else {
        printf("Erro: Pilha cheia.\n");
    }
}

int desempilhar(Pilha *p) {
    if (!vazia(p)) {
        int valor = p->itens[p->topo];
        p->topo--;
        return valor;
    } else {
        printf("Erro: Pilha vazia.\n");
        return -1;
    }
}

int topo(Pilha *p) {
    if (!vazia(p)) {
        return p->itens[p->topo];
    } else {
        printf("Erro: Pilha vazia.\n");
        return -1;
    }
}

int vazia(Pilha *p) {
    return p->topo == -1;
}

void destruirPilha(Pilha *p) {
    free(p->itens);
    free(p);
}
