#include<stdio.h>

main(){
    
    int valor, n;
    
    printf("Digite o numero: ");
    scanf("%d", &n);
    
    while ( valor <= n ){
        valor = n * 2+1;
        printf ("\n%d",valor );
    }

}