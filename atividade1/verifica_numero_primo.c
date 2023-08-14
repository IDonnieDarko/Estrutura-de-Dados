#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Se encontrar um divisor, não é primo
        }
    }

    return 1; // Se nenhum divisor for encontrado, é primo
}

int main() {
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (is_prime(numero)) {
        printf("1\n"); // Imprime 1 para número primo
    } else {
        printf("0\n"); // Imprime 0 para número não primo
    }

    return 0;
}
