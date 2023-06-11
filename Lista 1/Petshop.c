#include <stdio.h>

int main() {
    int nrCoelhos;
    float custo;

    printf("Informe a quantidade de coelhos: ");
    scanf("%d", &nrCoelhos);

    custo = (nrCoelhos * 0.70) / 18 + 10;

    printf("O custo de criacao de coelhos eh: %.2f\n", custo);

    return 0;
}
