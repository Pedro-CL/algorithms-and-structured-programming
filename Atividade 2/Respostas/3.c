#include<stdio.h>
#include<math.h>

main(){
	
	int comprimento,largura, area;
	printf("Digite o valor: ");
	scanf("%d %d", &comprimento, &largura);
	
	area = comprimento * largura;
	
	printf("\nValor da area: %d", area);
	
}
