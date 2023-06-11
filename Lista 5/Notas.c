#include <stdio.h>

#define TAMANHO 40

void ordenarNotas(float notas[], int tamanho) {
    int i, j;
    float temp;

    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (notas[j] > notas[j + 1]) {
                temp = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = temp;
            }
        }
    }
}

int pesquisarNota(float notas[], int tamanho, float nota) {
    int i;

    for (i = 0; i < tamanho; i++) {
        if (notas[i] == nota) {
            return i;  
        }
    }

    return -1;  
}

int main() {
    float notas[TAMANHO];
    int i;
    float notaPesquisada;

    printf("Digite as notas dos %d alunos:\n", TAMANHO);
    for (i = 0; i < TAMANHO; i++) {
        scanf("%f", &notas[i]);
    }

    ordenarNotas(notas, TAMANHO);

    printf("Notas ordenadas:\n");
    for (i = 0; i < TAMANHO; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    printf("Digite a nota que deseja pesquisar: ");
    scanf("%f", &notaPesquisada);

    int indice = pesquisarNota(notas, TAMANHO, notaPesquisada);

    if (indice != -1) {
        printf("A nota %.2f foi encontrada na posição %d do array.\n", notaPesquisada, indice);
    } else {
        printf("A nota %.2f não foi encontrada no array.\n", notaPesquisada);
    }

    return 0;
}
