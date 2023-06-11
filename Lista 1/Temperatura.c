#include <stdio.h>

int main() {
    float temperaturaFahrenheit, temperaturaCelsius;

    printf("Informe a temperatura em graus Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    temperaturaCelsius = ((temperaturaFahrenheit - 32) * 5) / 9;

    printf("A temperatura em graus Celsius é: %.2f\n", temperaturaCelsius);

    return 0;
}
