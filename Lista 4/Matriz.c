#include <stdio.h>

#define TAMANHO 5

int main() {
    int matrizA[TAMANHO];
    int matrizB[TAMANHO];
    int i;

    printf("Digite os %d elementos da matriz A:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%d", &matrizA[i]);
    }

    for (i = 0; i < TAMANHO; i++) {
        matrizB[i] = matrizA[i] * 3;
    }

    printf("Matriz B (elementos da matriz A multiplicados por 3):\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%d ", matrizB[i]);
    }

    return 0;
}
