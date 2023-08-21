#include <stdio.h>
#include <stdlib.h>

// Função para multiplicar elementos de dois arrays
int* multiplicarArrays(int array1[], int array2[], int tamanho) {
    int *resultado = (int*)malloc(tamanho * sizeof(int));
    
    if (resultado == NULL) {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }
    
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = array1[i] * array2[i];
    }
    
    return resultado;
}

int main() {
    int array1[] = {2, 3, 4, 5, 6};
    int array2[] = {5, 4, 3, 2, 1};
    int tamanho = sizeof(array1) / sizeof(array1[0]);
    
    int *resultado = multiplicarArrays(array1, array2, tamanho);
    
    printf("Resultado da multiplicação:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");
    
    // Libera a memória alocada para o array resultado
    free(resultado);
    
    return 0;
}
