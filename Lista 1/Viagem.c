#include <stdio.h>

int main() {
    float tempo, velocidadeMedia, distancia, litrosUsados;

    printf("Informe o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Informe a velocidade média durante a viagem (em km/h): ");
    scanf("%f", &velocidadeMedia);

    distancia = tempo * velocidadeMedia;

    litrosUsados = distancia / 12;

    printf("Velocidade média: %.2f km/h\n", velocidadeMedia);
    printf("Tempo gasto na viagem: %.2f horas\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Quantidade de litros de combustível usada: %.2f litros\n", litrosUsados);

    return 0;
}
