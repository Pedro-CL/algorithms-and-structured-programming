#include <stdio.h>

int main (){
    int num, div = 1;

    printf("Escreva um número: ");
    scanf("%d", &num);
    printf("Seus divisores são: ");

    for (int i = 0; i < num; i++){
        if ( num % div == 0){
            printf(" %d", div);
        }
        div++;
    }
       
    return 0;
}