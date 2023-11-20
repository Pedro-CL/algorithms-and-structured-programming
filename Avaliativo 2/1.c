#include <stdio.h>

// Protótipos das funções
int validarQuantidade(int quantidade);
float calcularSalario(int quantidade);
void resultado(float salarioTotal);
void mostrarFinal();

int main(void) {
    mostrarFinal();
    return 0;
}

int validarQuantidade(int quantidade) {
    return quantidade >= 0;
}

int lerQuantidade() {
    int quantidade;
    printf("Digite a quantidade de peças fabricadas: ");
    scanf("%d", &quantidade);
    
    while (!validarQuantidade(quantidade)) {
        printf("Valor inválido. Por favor, tente novamente.\n");
        printf("Digite a quantidade de peças fabricadas: ");
        scanf("%d", &quantidade);
    }
    
    return quantidade;
}

float calcularSalario(int quantidade) {
    const float salarioPadrao = 600.00;
    float adicional = 0;

    if (quantidade > 50) {
        adicional = (quantidade <= 80) ? (quantidade - 50) * 0.50f : (30 * 0.50f) + (quantidade - 80) * 0.75f;
    }

    return salarioPadrao + adicional;
}

void resultado(float salarioTotal) {
    printf("\n------------------- ADICIONAL ---------------------\n");
    printf("O valor adicional será de: R$ %.2f\n", salarioTotal - 600.00);
    printf("\n================== VALOR TOTAL ====================\n");
    printf("O salário final será de: R$ %.2f\n", salarioTotal);
}

void mostrarFinal() {
    char continuar;

    do {
        printf("\n-----------------------------------------------------\n");
        printf("\n               - CÁLCULO DO SALÁRIO                   \n");
        printf("\n-----------------------------------------------------\n");

        float salarioTotal = calcularSalario(lerQuantidade());
        resultado(salarioTotal);

        printf("Deseja calcular o salário de outro funcionário? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("\n=====================================================\n");
    printf("Cálculo dos salários concluído.\n");
}
