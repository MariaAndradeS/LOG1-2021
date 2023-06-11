#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float delta, raiz1, raiz2;

    printf("Informe o valor de A: ");
    scanf("%f", &a);

    printf("Informe o valor de B: ");
    scanf("%f", &b);

    printf("Informe o valor de C: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        raiz1 = (-b + sqrt(delta)) / (2 * a);
        raiz2 = (-b - sqrt(delta)) / (2 * a);

        printf("As raízes da equação são: %.2f e %.2f\n", raiz1, raiz2);
    } else if (delta == 0) {
        raiz1 = -b / (2 * a);

        printf("A equação possui uma raiz: %.2f\n", raiz1);
    } else {
        printf("A equação não possui raízes reais.\n");
    }

    return 0;
}
