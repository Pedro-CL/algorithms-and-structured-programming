#include<stdio.h>

main(){
    
    int idade,tempo;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite seu tempo de servico: ");
    scanf("%d", &tempo);
    
    if(idade >= 65 || tempo >= 30 || (idade >=60 && tempo >=25)){
        printf("Aposentado!");
    } else{
        printf("Nao aposentado");
    }    
    
}