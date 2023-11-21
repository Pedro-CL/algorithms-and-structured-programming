#include <stdio.h>

#define salarioMinino 1400
#define ABAIXO 'B'
#define IGUAL 'I'
#define ACIMA 'A'

void validar(char *sexo, float *salario);
char classificaSalario(float salario);
void mostraClassificacao(float salario, char classificacao, char sexo);
void contador(char classificacao, int *abaixo, int *igual, int *acima);

int main() {
    int quantidade, abaixo = 0, igual = 0, acima = 0;
    float salario;
    char sexo, classificacao;


    printf("----------------------------------------------------------\n");
    printf("Digite a quantidade de funcionarios da pesquisa --> ");
    scanf("%d", &quantidade);
    printf("----------------------------------------------------------\n\n\n");

    for (int i = 0; i < quantidade; i++) {
        printf("\n--------------------- FUNCIONARIO %d ----------------------\n", (i + 1));
        printf("   Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
        printf("   Digite o salario: R$");
        scanf("%f", &salario);

        validar(&sexo, &salario);

        classificacao = classificaSalario(salario);

        mostraClassificacao(salario, classificacao, sexo);

        contador(classificacao, &abaixo, &igual, &acima);
    }

    printf("\n\n=========================================================\n");
    printf(" %d    Funcionarios recebem ABAIXO do salario minimo\n", abaixo);
    printf(" %d    Funcionarios recebem IGUAL ao salario minimo\n", igual);
    printf(" %d    Funcionarios recebem ACIMA do salario minimo\n", acima);
    printf("=========================================================\n");

    return 0;
}

void validar(char *sexo, float *salario) {
    while (*salario <= 1) {
        printf("     *************** Salario invalido ******************\n");
        printf("      Informe um valor maior que ( R$1,00 ): R$");
        scanf("%f", salario);
    }

    while (*sexo != 'M' && *sexo != 'm' && *sexo != 'F' && *sexo != 'f') {
        printf("\n     *************** Sexo invalido ******************\n");
        printf("      Informe M para masculino ou F para feminino: ");

        // Limpar o buffer de entrada antes de solicitar novamente o valor do sexo
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        scanf(" %c", sexo);
    }
}


char classificaSalario(float salario) {
    return (salario > salarioMinino) ? ACIMA : ((salario == salarioMinino) ? IGUAL : ABAIXO);
}

void mostraClassificacao(float salario, char classificacao, char sexo) {
    printf("\n     __________________ RESULTADO ___________________\n");
    printf("\n          Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
    printf("          Salario: R$ %.2f\n", salario);
    printf("          Funcionario tem salario %s do minimo", (classificacao == ACIMA) ? "ACIMA" : (classificacao == IGUAL) ? "IGUAL" : "ABAIXO");
    printf("\n     ________________________________________________");
    printf("\n----------------------------------------------------------\n\n");
}

void contador(char classificacao, int *abaixo, int *igual, int *acima) {
    switch (classificacao) {
        case ACIMA:
            (*acima)++;
            break;
        case IGUAL:
            (*igual)++;
            break;
        case ABAIXO:
            (*abaixo)++;
            break;
    }
}
