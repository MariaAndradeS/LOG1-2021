#include <stdio.h>

int main() {
    float nota1, nota2, media, notaExame, novaMedia;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 6.0) {
        printf("Aluno aprovado!\n");
        printf("Média: %.2f\n", media);
    } else {
        printf("Aluno em exame. Informe a nota do exame: ");
        scanf("%f", &notaExame);

        novaMedia = (media + notaExame) / 2;

        if (novaMedia >= 5.0) {
            printf("Aluno aprovado em exame!\n");
            printf("Nova média: %.2f\n", novaMedia);
        } else {
            printf("Aluno reprovado!\n");
            printf("Média final: %.2f\n", novaMedia);
        }
    }

    return 0;
}
