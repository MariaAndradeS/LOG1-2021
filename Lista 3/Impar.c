#include <stdio.h>

int main() {
    int numero;

    printf("Valores ímpares de 0 a 20:\n");

    for (numero = 0; numero <= 20; numero++) {
        if (numero % 2 != 0) {
            printf("%d\n", numero);
        }
    }

    return 0;
}
