#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *criarFila(int tamanho) {
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->itens = (int *)malloc(tamanho * sizeof(int));
    f->tamanho = tamanho;
    f->frente = 0;
    f->tras = -1;
    f->quantidade = 0;
    return f;
}

void enfileirar(Fila *f, int valor) {
    if (f->quantidade < f->tamanho) {
        f->tras = (f->tras + 1) % f->tamanho;
        f->itens[f->tras] = valor;
        f->quantidade++;
    } else {
        printf("Erro: Fila cheia.\n");
    }
}

int desenfileirar(Fila *f) {
    if (!vazia(f)) {
        int valor = f->itens[f->frente];
        f->frente = (f->frente + 1) % f->tamanho;
        f->quantidade--;
        return valor;
    } else {
        printf("Erro: Fila vazia.\n");
        return -1;
    }
}

int frente(Fila *f) {
    if (!vazia(f)) {
        return f->itens[f->frente];
    } else {
        printf("Erro: Fila vazia.\n");
        return -1;
    }
}

int tras(Fila *f) {
    if (!vazia(f)) {
        return f->itens[f->tras];
    } else {
        printf("Erro: Fila vazia.\n");
        return -1;
    }
}

int vazia(Fila *f) {
    return f->quantidade == 0;
}

void destruirFila(Fila *f) {
    free(f->itens);
    free(f);
}
