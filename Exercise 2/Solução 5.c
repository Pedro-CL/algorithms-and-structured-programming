#include<stdio.h>
#include<math.h>

main(){
	
	float raio, area;
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);

	area = M_PI * pow(raio,2);
	
	printf("\nValor da area do circulo: %.2f", area);
	
}
