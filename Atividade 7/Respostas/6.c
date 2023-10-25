#include<stdio.h>

int main(){

    int fruta, total = 0;
    do{
        printf("\n-----MERCADO-----\n");
        printf("\n1.Abacaxi = R$5,00");
        printf("\n2.Maca = R$1,00");
        printf("\n3.Pera = R$4,00");

        switch (fruta)
        {
        case 1:
            total += 5;
            break;
        case 2:
            total += 1;
            break;
        case 3:
            total += 46.9;
            break;
        }
    }while(fruta != 0);

    printf("\nValor total: %d", total);

    return 0;
}