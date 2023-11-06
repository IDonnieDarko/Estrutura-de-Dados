// arquivo main.c
#include <stdio.h>
#include "tabela_hash.h"

int main() {
    hash_table_put("chave1", "dado1");
    hash_table_put("chave2", "dado2");

    printf("Contém chave1? %d\n", hash_table_contains("chave1")); // Deve imprimir 1 (true)
    printf("Contém chave3? %d\n", hash_table_contains("chave3")); // Deve imprimir 0 (false)

    printf("Valor para chave1: %s\n", hash_table_get("chave1")); // Deve imprimir dado1
    printf("Valor para chave2: %s\n", hash_table_get("chave2")); // Deve imprimir dado2

    hash_table_remove("chave1");
    printf("Contém chave1 após remoção? %d\n", hash_table_contains("chave1")); // Deve imprimir 0 (false)

    return 0;
}
