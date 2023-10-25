#include <stdio.h>

int main() {
    int numero;

    // Ler o número do usuário
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verificar se o número é par
    if (numero % 2 == 0) {
        printf("O numero digitado eh par.\n");
    }

    return 0;
}
