#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PESSOAS 5

struct Pessoa {
    char nome[100];
    char endereco[100];
    int idade;
    char telefone[20];
};

void cadastrar(struct Pessoa agenda[]) {
    int i;

    for (i = 0; i < MAX_PESSOAS; i++) {
        printf("Cadastro %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", agenda[i].nome);

        printf("Endereco: ");
        scanf(" %[^\n]", agenda[i].endereco);

        printf("Idade: ");
        scanf("%d", &agenda[i].idade);

        printf("Telefone: ");
        scanf(" %[^\n]", agenda[i].telefone);

        printf("\n");
    }
}

void pesquisarIdade(struct Pessoa agenda[]) {
    int i;
    char nome[100];
    int encontrou = 0;

    printf("Digite o nome da pessoa que deseja pesquisar a idade: ");
    scanf(" %[^\n]", nome);

    for (i = 0; i < MAX_PESSOAS; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("Idade de %s: %d anos\n", agenda[i].nome, agenda[i].idade);
            encontrou = 1;
            break;
        }
    }

    if (!encontrou) {
        printf("Pessoa não encontrada na agenda.\n");
    }
}

void classificar(struct Pessoa agenda[]) {
    int i, j;
    struct Pessoa temp;

    for (i = 0; i < MAX_PESSOAS - 1; i++) {
        for (j = 0; j < MAX_PESSOAS - i - 1; j++) {
            if (strcmp(agenda[j].nome, agenda[j + 1].nome) > 0) {
                temp = agenda[j];
                agenda[j] = agenda[j + 1];
                agenda[j + 1] = temp;
            }
        }
    }

    printf("Registros classificados por ordem alfabética.\n");
}

void alterar(struct Pessoa agenda[]) {
    int i;
    char nome[100];
    int encontrou = 0;

    printf("Digite o nome da pessoa que deseja alterar o registro: ");
    scanf(" %[^\n]", nome);

    for (i = 0; i < MAX_PESSOAS; i++) {
        if (strcmp(agenda[i].nome, nome) == 0) {
            printf("Cadastro atual:\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("Endereco: %s\n", agenda[i].endereco);
            printf("Idade: %d\n", agenda[i].idade);
            printf("Telefone: %s\n", agenda[i].telefone);

            printf("Digite os novos dados:\n");

            printf("Nome: ");
            scanf(" %[^\n]", agenda[i].nome);

            printf("Endereco: ");
            scanf(" %[^\n]", agenda[i].endereco);

            printf("Idade: ");
            scanf("%d", &agenda[i].idade);

            printf("Telefone: ");
            scanf(" %[^\n]", agenda[i].telefone);

            encontrou = 1;
            break;
        }
    }

    if (!encontrou) {
        printf("Pessoa não encontrada na agenda.\n");
    }
}

int main() {
    struct Pessoa agenda[MAX_PESSOAS];
    int opcao;

    do {
        printf("\nPrograma Agenda\n");
        printf("1. Cadastro e registros\n");
        printf("2. Pesquisa de registro\n");
        printf("3. Classificação alfabética\n");
        printf("4. Alteração de registro\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar(agenda);
                break;
            case 2:
                pesquisarIdade(agenda);
                break;
            case 3:
                classificar(agenda);
                break;
            case 4:
                alterar(agenda);
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 5);

    return 0;
}
