#include<stdio.h>

int main()
{
    int quantidade, produto;
    float valor;

    printf("Digite o numero do seu pedido: ");
    scanf("%d", &produto);
    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    switch (produto)
    {
    case 100 :
        valor = quantidade * 10.10;
        printf("Seu valor total: %.2f", valor );
        break;
    case 101 :
        valor = quantidade * 8.30;
        printf("Seu valor total: %.2f", valor );
        break;
    case 102 :
        valor = quantidade * 8.50;
        printf("Seu valor total: %.2f", valor );        
        break;
    case 103 :
        valor = quantidade * 12.50;
        printf("Seu valor total: %.2f", valor );        
        break;
    case 104 :
        valor = quantidade * 13.25;
        printf("Seu valor total: %.2f", valor );        
        break;

    }
    return 0;
}