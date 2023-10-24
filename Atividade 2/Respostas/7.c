#include<stdio.h>
#include<math.h>

main(){
	
	int idade,ano,mes,dias;
	printf("\nDigite a sua idade em ano: ");
	scanf("%d", &ano);
	printf("\nDigite a sua idade em mes: ");
	scanf("%d", &mes);
	printf("\nDigite a sua idade em dias: ");
	scanf("%d", &dias);

	idade = ano*365 + mes*30 + dias;
	
	printf("\nTotal de dias vividos: %d", idade);
	
}