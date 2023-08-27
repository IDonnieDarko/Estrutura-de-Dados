#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    float y;
} Ponto;

void calcularRegressaoLinear(Ponto* pontos, int numPontos) {
    int somatorioX = 0;
    float somatorioY = 0;
    int somatorioXY = 0;
    int somatorioXQuadrado = 0;

    for (int i = 0; i < numPontos; i++) {
        somatorioX += pontos[i].x;
        somatorioY += pontos[i].y;
        somatorioXY += pontos[i].x * pontos[i].y;
        somatorioXQuadrado += pontos[i].x * pontos[i].x;
    }

    float mediaX = (float)somatorioX / numPontos;
    float mediaY = somatorioY / numPontos;

    float coefAngular = ((numPontos * somatorioXY) - (somatorioX * somatorioY)) /
                         ((numPontos * somatorioXQuadrado) - (somatorioX * somatorioX));
    
    float coefLinear = mediaY - (coefAngular * mediaX);

    printf("Equação da regressão linear: y = %.4fx + %.4f\n", coefAngular, coefLinear);
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Uso: %s arquivo.csv\n", argv[0]);
        return 1;
    }

    FILE* arquivo = fopen(argv[1], "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int numPontos = 0;
    while (!feof(arquivo)) {
        char linha[100];
        if (fgets(linha, sizeof(linha), arquivo)) {
            numPontos++;
        }
    }

    Ponto* pontos = (Ponto*)malloc(numPontos * sizeof(Ponto));

    fseek(arquivo, 0, SEEK_SET);

    for (int i = 0; i < numPontos; i++) {
        fscanf(arquivo, "%d,%f", &pontos[i].x, &pontos[i].y);
    }

    fclose(arquivo);

    calcularRegressaoLinear(pontos, numPontos);

    free(pontos);

    return 0;
}
