#include <stdio.h>

#define LINHAS 10
#define COLUNAS 3

int calcularFatorial(int num) {
    int fatorial = 1;
    int i;

    for (i = 1; i <= num; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {
    int matrizA[LINHAS];
    int matrizB[LINHAS][COLUNAS];
    int i, j;

    printf("Digite os elementos da matriz A:\n");
    for (i = 0; i < LINHAS; i++) {
        scanf("%d", &matrizA[i]);
    }

    for (i = 0; i < LINHAS; i++) {
        matrizB[i][0] = matrizA[i] + 5;
    }

    for (i = 0; i < LINHAS; i++) {
        matrizB[i][1] = calcularFatorial(matrizA[i]);
    }

    for (i = 0; i < LINHAS; i++) {
        matrizB[i][2] = matrizA[i] * matrizA[i];
    }

    printf("Matriz B:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
