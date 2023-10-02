#include <stdio.h>
#include "pilha.h"
#include "fila.h"

int main() {
    // Caso de uso para Pilha
    Pilha *p = criarPilha(5);
    
    empilhar(p, 1);
    empilhar(p, 2);
    empilhar(p, 3);
    
    printf("Topo da pilha: %d\n", topo(p)); // Deve imprimir "Topo da pilha: 3"
    
    printf("Desempilhando: %d\n", desempilhar(p)); // Deve imprimir "Desempilhando: 3"
    printf("Topo da pilha: %d\n", topo(p)); // Deve imprimir "Topo da pilha: 2"
    
    destruirPilha(p);

    // Caso de uso para Fila
    Fila *f = criarFila(5);

    enfileirar(f, 10);
    enfileirar(f, 20);
    enfileirar(f, 30);

    printf("Frente da fila: %d\n", frente(f)); // Deve imprimir "Frente da fila: 10"
    printf("Tras da fila: %d\n", tras(f));     // Deve imprimir "Tras da fila: 30"

    printf("Desenfileirando: %d\n", desenfileirar(f)); // Deve imprimir "Desenfileirando: 10"
    printf("Frente da fila: %d\n", frente(f));         // Deve imprimir "Frente da fila: 20"

    destruirFila(f);

    return 0;
}
