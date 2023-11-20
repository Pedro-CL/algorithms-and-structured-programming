#include <stdio.h>

// Protótipos das funções
void validar(char *sexo, float *salario);
char classificaSalario(float salario);
void mostraClassificacao(float salario, char classificacao, char sexo);
void contador(char classificacao, int *abaixo, int *igual, int *acima);

int main() {
    int quantidade, abaixo = 0, igual = 0, acima = 0;
    float salario;
    char sexo, classificacao;
    
    printf("Quantidade de funcionarios da pesquisa --> ");
    scanf("%d", &quantidade);
    printf("-----------------------------------------------\n");

    for (int i = 0; i < quantidade; i++) {
        printf("\n------------------ FUNCIONARIO %d -------------------\n", (i + 1));
        printf("   Informe o sexo (M/F) --> ");
        scanf(" %c", &sexo);
        printf("   Digite o salario --> R$ ");
        scanf("%f", &salario);

        validar(&sexo, &salario);
        
        classificacao = classificaSalario(salario);
        
        mostraClassificacao(salario, classificacao, sexo);

        contador(classificacao, &abaixo, &igual, &acima);
    }
    
    printf("\n\n-----------------------------------------------------\n");
    printf(" %d Funcionarios recebem ABAIXO do salario minimo\n", abaixo);
    printf(" %d Funcionarios recebem IGUAL ao salario minimo\n", igual);
    printf(" %d Funcionarios recebem ACIMA do salario minimo\n", acima);
    printf("-----------------------------------------------------\n");

    return 0;
}

// Funcao para validar os dados de entrada
void validar(char *sexo, float *salario) {
    while (*salario <= 1) {
        printf("      *** Salario invalido ***\n");
        printf("      Informe um valor maior que R$1,00 --> R$ ");
        scanf("%f", salario);
    }

    while (*sexo != 'M' && *sexo != 'm' && *sexo != 'F' && *sexo != 'f') {
        printf("      *** Sexo invalido ***\n");
        printf("      Informe M para masculino ou F para feminino --> ");
        scanf(" %c", sexo);
    }
}

// Funcao para classificar o salario
char classificaSalario(float salario) {
    return (salario > 1400) ? 'A' : ((salario == 1400) ? 'I' : 'B');
}

// Funcao para imprimir os resultados
void mostraClassificacao(float salario, char classificacao, char sexo) {
    
    printf("\n      --------------- RESULTADO ---------------\n");
    printf("       Sexo: %s\n", (sexo == 'M' || sexo == 'm') ? "Masculino" : "Feminino");
    printf("       Salario: R$ %.2f\n", salario);

    switch (classificacao) {
        case 'A':
            printf("       Funcionario tem salario ACIMA do minimo\n\n");
            break;
        case 'I':
            printf("       Funcionario tem salario IGUAL ao minimo\n\n");
            break;
        case 'B':
            printf("       Funcionario tem salario ABAIXO do minimo\n\n");
            break;
    }
}

// Funcao para contar acima, igual e abaixo do salario
void contador(char classificacao, int *abaixo, int *igual, int *acima) {
    switch (classificacao) {
        case 'A':
            (*acima)++;
            break;
        case 'I':
            (*igual)++;
            break;
        case 'B':
            (*abaixo)++;
            break;
    }
}
