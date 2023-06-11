#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Informe o valor de A: ");
    scanf("%d", &a);

    printf("Informe o valor de B: ");
    scanf("%d", &b);

    printf("Valores originais: A = %d, B = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("Valores trocados: A = %d, B = %d\n", a, b);

    return 0;
}
