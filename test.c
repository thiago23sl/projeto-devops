#include <stdio.h>
#include <assert.h>

// funções simples para testar
int soma(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }

int main() {

    // TESTE 1
    assert(soma(2, 3) == 5);

    // TESTE 2
    assert(soma(0, 0) == 0);

    // TESTE 3
    assert(sub(5, 3) == 2);

    // TESTE 4
    assert(sub(10, 5) == 5);

    // TESTE 5
    assert(soma(-1, 1) == 0);

    printf("Todos os testes passaram!\n");

    return 0;
}