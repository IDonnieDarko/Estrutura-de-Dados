#include <stdio.h>

// Função para calcular a soma dos elementos do array
int somaArray(int array[], int tamanho) {
    int soma = 0;
    
    for (int i = 0; i < tamanho; i++) {
        soma += array[i];
    }
    
    return soma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    
    int resultado = somaArray(numeros, tamanho);
    
    printf("A soma dos elementos do array é: %d\n", resultado);
    
    return 0;
}
