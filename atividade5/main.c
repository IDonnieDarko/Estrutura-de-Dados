#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubble_sort.h"

#define MAX_WORDS 100

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <nome_do_arquivo>\n", argv[0]);
        return 1;
    }

    char *inputFileName = argv[1];
    char *outputFileName = "arq_palavras_ordenado.txt";
    FILE *inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        perror("Erro ao abrir o arquivo de entrada");
        return 1;
    }

    char *words[MAX_WORDS];
    int wordCount = 0;

    // Lê as palavras do arquivo
    char word[100];
    while (fscanf(inputFile, "%s", word) == 1 && wordCount < MAX_WORDS) {
        words[wordCount] = strdup(word);
        wordCount++;
    }

    // Fecha o arquivo de entrada
    fclose(inputFile);

    // Ordena as palavras
    bubbleSort(words, wordCount);

    // Cria o arquivo de saída
    FILE *outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        perror("Erro ao criar o arquivo de saída");
        return 1;
    }

    // Escreve as palavras ordenadas no arquivo de saída
    for (int i = 0; i < wordCount; i++) {
        fprintf(outputFile, "%s\n", words[i]);
        free(words[i]);
    }

    // Fecha o arquivo de saída
    fclose(outputFile);

    printf("Palavras ordenadas no arquivo: %s\n", outputFileName);

    return 0;
}
