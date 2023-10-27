#include <stdio.h>

int main (){

    int num;
    long int termoAtual=1, termoAnterior=0, termoAntes;

    printf("\n------------------------------------------------------");
    printf("\n--------------- SEQUÊNCIA DE FIBONACCI ---------------");
    printf("\n------------------------------------------------------\n");
    printf("\n   ƒ(N)={1,1,2,3,5,8,13,21,34,55,89,144,233,377...}   \n");
    printf("\n======================================================\n");
    printf("\nDigite a posição de N a ser impresso: ");
    scanf("%d", &num);

    if (num < 0){
        printf("\n******* A posição deve ser um número positivo. *******");
    }else if (num == 0) {
        printf("\n______________________________________________________\n");
        printf("O termo da posição 0º é 0\n");
    }else{
       for (int i = 2; i <= num; i++) {
              termoAntes = termoAnterior;
              termoAnterior = termoAtual;
              termoAtual = termoAnterior + termoAntes;
          }
      printf("\n______________________________________________________\n");
      printf("\nO termo de Fibonacci de ordem %dº é %lld\n", num, termoAtual); 
    }
  return 0;
}
