#include<stdio.h>

main(){
	
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num == 5){
		printf("O seu numero é igual a 5");
	}
	if(num == 200){
		printf("O seu numero e igual a 200");
	}
	if(num ==400){
		printf("O seu numero e igual a 400");
	}
	if (num >= 500 && num<= 1000){
		printf("O seu numero esta entre 500 e 1000");
	}
}