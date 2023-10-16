// lista.h
#ifndef LISTA_H
#define LISTA_H

typedef struct No {
    float valor; // Alterado o tipo para FLOAT
    struct No* proximo_no;
} No;

No* no(float valor, No* proximo_no); // Alterado o tipo do parâmetro para float
void lista_inserir_no(No* L, No* no);
void lista_imprimir(No* L);
int lista_quantidade_nos(No* L);
No* lista_copiar(No* L);
void lista_concatenar(No* L, No* Lc);
void lista_liberar(No* L);
int lista_verificar_existencia(No* L, float valor_busca); // Alterado o tipo do parâmetro
int lista_verificar_ocorrencias(No* L, float valor_busca); // Alterado o tipo do parâmetro
void lista_imprimir_inversa(No* L);
void lista_inserir_no_i(No* L, int i);
void lista_remover_no_i(No* L, int i);
void lista_remover_no(No* L, float valor_busca); // Alterado o tipo do parâmetro
void lista_inserir_no_ordenado(No* L, No* no);

#endif
