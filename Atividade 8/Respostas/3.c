#include <stdio.h>

int main (){
  
    int num, i;
    int elemento1 = 0, elemento2 = 1, elemento3;

    printf("\n----------------------------------------------------");
    printf("\n-------------- SEQUÊNCIA DE FIBONACCI --------------");
    printf("\n----------------------------------------------------\n");
    printf("\nDigite a posição do elemento a ser impresso: ");
    scanf("%d", &num);

    for (i = 2; i < num; i++){ // O i é igual a 2 porque já foi determinado os dois primeiros elementos da squencia de Fibonacci (fib1 = 0; fib2 = 1)
        elemento3 = elemento1 + elemento2;
        elemento1 = elemento2;
        elemento2 = elemento3;
    }
    printf("\n____________________________________________________\n");
    printf("\nElemento da posição %dº é %d", num, elemento3); 
    printf("\n____________________________________________________\n");
    
  return 0;
}
