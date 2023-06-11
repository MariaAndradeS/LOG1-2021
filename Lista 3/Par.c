#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    printf("Somatório dos valores pares de 1 a 500:\n");

    for (numero = 1; numero <= 500; numero++) {
        if (numero % 2 == 0) {
            soma += numero;
        }
    }

    printf("O somatório é: %d\n", soma);

    return 0;
}
