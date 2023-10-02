#ifndef PILHA_H
#define PILHA_H

// Definição da estrutura de dados da pilha
typedef struct Pilha {
    int *itens;
    int tamanho;
    int topo;
} Pilha;

// Protótipos das funções da pilha
Pilha *criarPilha(int tamanho);
void empilhar(Pilha *p, int valor);
int desempilhar(Pilha *p);
int topo(Pilha *p);
int vazia(Pilha *p);
void destruirPilha(Pilha *p);

#endif
