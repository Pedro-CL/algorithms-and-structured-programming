#include<stdio.h>
#include<math.h>

main(){
	
	float mercadoria,frete,despesas,venda,porcentLucro,lucro,valBruto ;
	printf("Digite o valor da mercadoria: ");
	scanf("%f", &mercadoria);
	
	printf("Digite o valor do frete: ");
	scanf("%f", &frete);
	
	printf("Digite o valor das despesas: ");
	scanf("%f", &despesas);
	
	valBruto = mercadoria + frete + despesas;
	
	printf("O valor de custo do produto e: R$%.2f\n",valBruto);
	printf("Digite o valor de venda: ");
	scanf("%f", &venda);
	
	lucro = (venda-valBruto);
	porcentLucro = (lucro/valBruto*100);
	
	printf("\nPorcentagem do lucro: %.2f%%", porcentLucro);
	
}
