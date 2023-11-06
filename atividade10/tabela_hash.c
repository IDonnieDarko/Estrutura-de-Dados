// arquivo tabela_hash.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tabela_hash.h"

char* hash_table[TABLE_SIZE];

int hash(char* chave) {
    // Função simples de hash para converter a chave em um índice do array
    int hash = 0;
    for (int i = 0; chave[i] != '\0'; i++) {
        hash = (hash + chave[i]) % TABLE_SIZE;
    }
    return hash;
}

char* hash_table_get(char* chave) {
    int index = hash(chave);
    return hash_table[index];
}

void hash_table_put(char* chave, char* dado) {
    int index = hash(chave);
    hash_table[index] = dado;
}

int hash_table_contains(char* chave) {
    int index = hash(chave);
    return (hash_table[index] != NULL);
}

void hash_table_remove(char* chave) {
    int index = hash(chave);
    hash_table[index] = NULL;
}
