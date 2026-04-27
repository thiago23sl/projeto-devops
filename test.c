#include <stdio.h>
#include <assert.h>

// funções simples para testar
int soma(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {

    printf("Executando testes...\n");

    // TESTE 1
    assert(soma(2, 3) == 5);
    printf("Teste 1 OK\n");

    // TESTE 2
    assert(soma(0, 0) == 0);
    printf("Teste 2 OK\n");

    // TESTE 3
    assert(sub(5, 3) == 2);
    printf("Teste 3 OK\n");

    // TESTE 4
    assert(sub(10, 5) == 5);
    printf("Teste 4 OK\n");

    // TESTE 5
    assert(soma(-1, 1) == 0);
    printf("Teste 5 OK\n");

    printf("Todos os testes passaram!\n");

    return 0;
}