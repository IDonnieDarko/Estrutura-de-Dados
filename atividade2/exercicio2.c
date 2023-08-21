#include <stdio.h>

// Função para encontrar o menor e o maior elemento do array
void minMaxArray(int array[], int tamanho, int *menor, int *maior) {
    if (tamanho <= 0) {
        // Caso o array seja vazio, não há menor ou maior elemento
        *menor = *maior = 0;  // Você pode ajustar esses valores conforme necessário
        return;
    }

    *menor = *maior = array[0];  // Inicializa o menor e o maior com o primeiro elemento

    for (int i = 1; i < tamanho; i++) {
        if (array[i] < *menor) {
            *menor = array[i];
        }
        if (array[i] > *maior) {
            *maior = array[i];
        }
    }
}

int main() {
    int numeros[] = {10, 5, 8, 3, 15, 2};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    
    int menor, maior;
    minMaxArray(numeros, tamanho, &menor, &maior);
    
    printf("O menor elemento do array é: %d\n", menor);
    printf("O maior elemento do array é: %d\n", maior);
    
    return 0;
}
