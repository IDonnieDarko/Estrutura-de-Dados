#include <stdio.h>
#include <string.h>

// Função para verificar se uma string existe no array de strings
int buscaString(const char *array[], int tamanho, const char *busca) {
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(array[i], busca) == 0) {
            return 1;  // A string foi encontrada no array
        }
    }
    return 0;  // A string não foi encontrada no array
}

int main() {
    const char *nomes[] = {"João", "Maria", "Carlos", "Ana", "Pedro"};
    int tamanho = sizeof(nomes) / sizeof(nomes[0]);
    const char *busca = "Ana";
    
    int resultado = buscaString(nomes, tamanho, busca);
    
    if (resultado) {
        printf("A string '%s' foi encontrada no array.\n", busca);
    } else {
        printf("A string '%s' não foi encontrada no array.\n", busca);
    }
    
    return 0;
}
