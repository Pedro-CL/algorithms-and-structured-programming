#include<stdio.h>

main(){
	float salario,totalVendas, comissao, total;
	int numCarroVendido;
	
	printf("informe seu salario: R$");
	scanf("%f",&salario);
	printf("Informe o numeto de carro vendidos: ");
	scanf("%d", &numCarroVendido);
	printf("Informe total de vendas: R$");
	scanf("%f", &totalVendas);
	printf("Informe a comissao: R$");
	scanf("%f", &comissao);
	
	total = salario + (numCarroVendido * comissao) + (totalVendas * 0.05);
	
	printf("Salario final: %.2f", total);
	
}
