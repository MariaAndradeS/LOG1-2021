#include <stdio.h>

#define TAMANHO_A 20
#define TAMANHO_B 30
#define TAMANHO_C (TAMANHO_A + TAMANHO_B)

int main() {
    int matrizA[TAMANHO_A];
    int matrizB[TAMANHO_B];
    int matrizC[TAMANHO_C];
    int i;

    printf("Digite os %d elementos da matriz A:\n", TAMANHO_A);
    for (i = 0; i < TAMANHO_A; i++) {
        scanf("%d", &matrizA[i]);
        matrizC[i] = matrizA[i];
    }

    printf("Digite os %d elementos da matriz B:\n", TAMANHO_B);
    for (i = 0; i < TAMANHO_B; i++) {
        scanf("%d", &matrizB[i]);
        matrizC[TAMANHO_A + i] = matrizB[i];
    }

    printf("Matriz C (junção de A e B):\n");
    for (i = 0; i < TAMANHO_C; i++) {
        printf("%d ", matrizC[i]);
    }

    return 0;
}
