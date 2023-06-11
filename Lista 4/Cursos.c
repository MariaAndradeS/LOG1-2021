#include <stdio.h>

int main() {
    int codigo;

    printf("Digite o código de acesso: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Curso: Engenharia\n");
            break;
        case 2:
            printf("Curso: Edificações\n");
            break;
        case 3:
            printf("Curso: Sistemas Elétricos\n");
            break;
        case 4:
            printf("Curso: Turismo\n");
            break;
        case 5:
            printf("Curso: Análise de Sistemas\n");
            break;
        default:
            printf("Código inválido!\n");
            break;
    }

    return 0;
}
