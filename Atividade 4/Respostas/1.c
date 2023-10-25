#include<stdio.h>
#include<math.h>

main(){
	
	float numero;
	
	printf("Digite um numero: ");
	scanf("%f", &numero);
	
	if(numero>=0){
		printf("Seu numero: %f", sqrt(numero));
	}
	else{
		printf("Seu numero: %f", pow(numero,2));
	}
}