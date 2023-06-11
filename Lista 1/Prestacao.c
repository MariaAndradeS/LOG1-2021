#include <stdio.h>

int main() {
    float valor, taxa, tempo, prestacao;

    printf("Informe o valor da prestacao: ");
    scanf("%f", &valor);

    printf("Informe a taxa de juros (em porcentagem): ");
    scanf("%f", &taxa);

    printf("Informe o tempo em atraso (em meses): ");
    scanf("%f", &tempo);

    prestacao = valor + (valor * (taxa / 100) * tempo);

    printf("O valor da prestacao em atraso eh: %.2f\n", prestacao);

    return 0;
}
