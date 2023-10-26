#include <stdio.h>
#include <math.h>

int main() {
    int A = 0, B = 0, C = 0, D = 0, E = 0, idade, maiorIdadeA = 0, maiorIdadeD = 0,mediaD = 0, pessoas = 1;
    float diferenca, porcent;
    char nota;

    while (pessoas <= 100) {
        
        printf("\n\n--------------------------------------------------\n");
        printf("\n\n--------------Pesquisa de Satisfacao--------------\n");
        printf("\n\n--------------------------------------------------\n");

        printf("\n Por favor, informe a sua idade: ");
        scanf("%d", &idade);

        getchar(); // Limpa o buffer de entrada

        printf("\n Nivel de satisfacao *****************************\n");
        printf("\n    A - Otimo");
        printf("\n    B - Bom");
        printf("\n    C - Regular");
        printf("\n    D - Ruim");
        printf("\n    E - Pessimo\n");

        printf("\nDe acordo com os niveis, qual nota voce daria: ");
        scanf("%c", &nota);

        switch (nota) {
            case 'A':
                A++;
                if (idade > maiorIdadeA) {
                    maiorIdadeA = idade;
                }
                break;
            case 'B':
                B++;
                break;
            case 'C':
                C++;
                break;
            case 'D':
                D++;
                if (idade > maiorIdadeD) {
                    maiorIdadeD = idade;
                }
                if (D > 0) {
                mediaD = idade / D;
                }
                break;
            case 'E':
                E++;
                break;
            default:
                printf("\n######## Opicao invalida, tente novamente ########\n");
                continue; // Continua com a próxima iteração
        }
        printf("___________________________________________________\n");
        printf("\nObrigado pela sua resposta ;)");
        printf("\n__________________________________________________\n");
        pessoas++;
    }

    diferenca = ((float)B - (float)C) / (float)B * 100.0f;
    porcent = ((float)E / 100.0f) * 100.0f;

    printf("\nQuantidade de pessoas que responderam 'otimo': %d", A);
    printf("\nPorcentagem de diferenca entre as respostas 'Bom' e 'Regular': %.2f", diferenca);
    printf("\nMedia da idade das pessoas que responderam 'Ruim': %d anos", mediaD);
    printf("\nPercentagem de respostas 'Pessimo': %.2f%%", porcent);
   
    if (D > 0) {
        printf("\nA maior idade que utilizou a opcao 'Ruim': %d anos\n", maiorIdadeD);
    } else {
        printf("\nNenhuma idade encontrada que respondeu 'Ruim'.\n");
    }

    return 0;
}
