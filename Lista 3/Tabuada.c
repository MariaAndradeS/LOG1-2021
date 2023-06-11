#include <stdio.h>

int main() {
    int numero;
    int i;

    printf("Digite um número para exibir a tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada do %d:\n", numero);

    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
