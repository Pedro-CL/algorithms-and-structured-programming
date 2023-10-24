#include<stdio.h>
#include<math.h>

main(){
	
	float custo,total;
	const int DISTRIBUIDOR = 28;
	const int IMPOSTO = 45;
	
	printf("Qual custo inicial do carro: R$");
	scanf("%f", &custo);
	
	total = custo + (custo*DISTIBUIDOR/100) + (custo*IMPOSTO/100);
	
	printf("\nCusto toral: %.2f", total);

//Lucas Francisco
//Pedro Carneiro
	
}