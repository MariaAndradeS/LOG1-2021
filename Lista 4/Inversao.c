#include <stdio.h>

#define TAMANHO 10

int main() {
    int matrizA[TAMANHO];
    int matrizB[TAMANHO];
    int i;

    printf("Digite os %d elementos da matriz A:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &matrizA[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        matrizB[i] = matrizA[TAMANHO - 1 - i];
    }

    printf("Matriz B (elementos de A invertidos):\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", matrizB[i]);
    }

    return 0;
}
