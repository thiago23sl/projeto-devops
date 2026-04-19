#include <stdio.h>
#include <string.h>

#define MAX 100
#define TAM 100

char livros[MAX][TAM];
int total = 0;

void cadastrarLivro() {
    getchar();
    printf("Digite o nome do livro: ");
    fgets(livros[total], TAM, stdin);
    livros[total][strcspn(livros[total], "\n")] = '\0';
    total++;
    printf("Livro cadastrado!\n");
}

void listarLivros() {
    printf("\n=== LISTA DE LIVROS ===\n");

    for (int i = 0; i < total; i++) {
        printf("%d - %s\n", i + 1, livros[i]);
    }
}

void buscarLivro() {
    char busca[TAM];

    getchar();
    printf("Digite o nome do livro: ");
    fgets(busca, TAM, stdin);
    busca[strcspn(busca, "\n")] = '\0';

    for (int i = 0; i < total; i++) {
        if (strcmp(busca, livros[i]) == 0) {
            printf("Livro encontrado!\n");
            return;
        }
    }

    printf("Livro nao encontrado.\n");
}

void removerLivro() {
    int num;

    listarLivros();

    printf("Digite o numero para remover: ");
    scanf("%d", &num);

    if (num >= 1 && num <= total) {
        for (int i = num - 1; i < total - 1; i++) {
            strcpy(livros[i], livros[i + 1]);
        }

        total--;
        printf("Livro removido!\n");
    } else {
        printf("Numero invalido.\n");
    }
}

int main() {
    int op;

    do {
        printf("\n===== SISTEMA BIBLIOTECA =====\n");
        printf("1 - Cadastrar Livro\n");
        printf("2 - Listar Livros\n");
        printf("3 - Buscar Livro\n");
        printf("4 - Remover Livro\n");
        printf("5 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                cadastrarLivro();
                break;
            case 2:
                listarLivros();
                break;
            case 3:
                buscarLivro();
                break;
            case 4:
                removerLivro();
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }

    } while(op != 5);

    return 0;
}