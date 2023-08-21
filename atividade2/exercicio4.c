#include <stdio.h>

// Função para contar a quantidade de ocorrências de um número no array
int contarOcorrencias(int array[], int tamanho, int busca) {
    int contador = 0;
    
    for (int i = 0; i < tamanho; i++) {
        if (array[i] == busca) {
            contador++;
        }
    }
    
    return contador;
}

int main() {
    int numeros[] = {3, 5, 2, 3, 8, 3, 9, 1, 3};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int busca = 3;
    
    int quantidade = contarOcorrencias(numeros, tamanho, busca);
    
    printf("O numero %d aparece %d vezes no array.\n", busca, quantidade);
    
    return 0;
}
