#include <stdio.h>

int main() {
    float ladoA, ladoB, ladoC;

    printf("Informe o valor do lado A: ");
    scanf("%f", &ladoA);

    printf("Informe o valor do lado B: ");
    scanf("%f", &ladoB);

    printf("Informe o valor do lado C: ");
    scanf("%f", &ladoC);

    if (ladoA < ladoB + ladoC && ladoB < ladoA + ladoC && ladoC < ladoA + ladoB) {
        if (ladoA == ladoB && ladoB == ladoC) {
            printf("O triângulo é equilátero.\n");
        } else if (ladoA == ladoB || ladoA == ladoC || ladoB == ladoC) {
            printf("O triângulo é isósceles.\n");
        } else {
            printf("O triângulo é escaleno.\n");
        }
    } else {
        printf("Os lados informados não formam um triângulo.\n");
    }

    return 0;
}
