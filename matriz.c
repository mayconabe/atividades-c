#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

void preencherMatriz(int (*matriz)[COLUNAS]) {
    int valor = 99;  // Começa com 99 e decrementa
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = valor;
            valor--;
        }
    }
}

void imprimirMatriz(int matriz[LINHAS][COLUNAS]) {
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%3d ", matriz[i][j]);  // Impressão formatada
        }
        printf("\n");
    }
}

int main() {
    int matriz[LINHAS][COLUNAS];
    preencherMatriz(matriz);
    imprimirMatriz(matriz);
    return 0;
}
