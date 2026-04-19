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
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Funcao em desenvolvimento.\n");
        }

    } while(op != 5);

    return 0;
}