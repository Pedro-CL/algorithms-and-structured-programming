#include<stdio.h>
#include<math.h>

main(){
	
	float real,dolar, convert;
	printf("Digite o valor em real: ");
	scanf("%f", &real);
	
	printf("Digite a contacao do dolar: ");
	scanf("%f", &dolar);
	
	convert = real/dolar;
	
	printf("\nValor convertido: US$ %.2f", convert);
	
}