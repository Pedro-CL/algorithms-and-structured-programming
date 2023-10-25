#include<stdio.h>

int main()
{
    int  DDD;

    printf("Digite o numero do seu DDD: ");
    scanf("%d", &DDD);

    switch (DDD)
    {
    case 61 :
        printf("Seu numero e de Brasilia");
        break;
    case 71 :
        printf("Seu numero e de Salvador");
        break;
    case 11 :
        printf("Seu numero e de Sao Paulo");
        break;
    case 21 :
        printf("Seu numero e de Rio de Janeiro");
        break;
    case 32 :
        printf("Seu numero e de Juiz de Fora");
        break;
    case 19 :
        printf("Seu numero e de Campinas");
        break;
    case 27 :
        printf("Seu numero e de Vitoria");
        break;
    case 31 :
        printf("Seu numero e de Belo Horizonte");
        break;

    default:
        printf("Cidade do Brasil sem identificacao");
        break;
    }
    return 0;
}