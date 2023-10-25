#include<stdio.h>

int main(){

    int total, prato, sobremesa, bebida;

    printf("\nInfome o seu prato: ");
    scanf("%d", &prato);
    printf("\nInforme a sua sobremesa: ");
    scanf("%d", &sobremesa);
    printf("\nInfome o sua bebida: ");
    scanf("%d", &bebida);

    switch (prato)
    {
    case 1 :
        total = total + 180;
        printf("\nSeu valor total do prato: %d", total );
        break;
    case 2 :
        total = total + 230;
        printf("\nSeu valor total do prato: %d", total );        
        break;
    case 3 :
        total = total + 250;
        printf("\nSeu valor total do prato: %d", total );        
        break;
    case 4 :
        total = total + 350;
        printf("\nSeu valor total do prato: %d", total );        
        break;

    }
}