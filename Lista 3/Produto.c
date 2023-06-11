#include <stdio.h>

int main() {
    int n;
    int produto = 1;

    printf("Digite um número inteiro menor ou igual a 50: ");
    scanf("%d", &n);

    if (n <= 50) {
        while (produto < 250) {
            produto *= 3 * n;
            printf("%d\n", produto);
        }
    } else {
        printf("Número inválido!\n");
    }

    return 0;
}
