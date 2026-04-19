#include <stdio.h>

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
                printf("Funcao em desenvolvimento.\n");
                break;
            case 2:
                printf("Funcao em desenvolvimento.\n");
                break;
            case 3:
                printf("Funcao em desenvolvimento.\n");
                break;
            case 4:
                printf("Funcao em desenvolvimento.\n");
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