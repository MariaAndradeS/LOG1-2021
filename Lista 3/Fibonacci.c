#include <stdio.h>

int main() {
    int termoAtual = 1;
    int termoAnterior = 0;
    int resultado;
    int contador;

    printf("Série de Fibonacci até o décimo quinto termo:\n");

    for (contador = 1; contador <= 15; contador++) {
        printf("%d ", termoAtual);

        resultado = termoAtual + termoAnterior;
        termoAnterior = termoAtual;
        termoAtual = resultado;
    }

    printf("\n");

    return 0;
}
