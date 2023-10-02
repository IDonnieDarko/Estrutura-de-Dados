#ifndef FILA_H
#define FILA_H

// Definição da estrutura de dados da fila
typedef struct Fila {
    int *itens;
    int tamanho;
    int frente;
    int tras;
    int quantidade;
} Fila;

// Protótipos das funções da fila
Fila *criarFila(int tamanho);
void enfileirar(Fila *f, int valor);
int desenfileirar(Fila *f);
int frente(Fila *f);
int tras(Fila *f);
int vazia(Fila *f);
void destruirFila(Fila *f);

#endif
