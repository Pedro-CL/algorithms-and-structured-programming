#include<stdio.h>

main(){
    
    int n=0;
    printf("Digite um numero: ");
    scanf("%d", &n );
    
    while(n >= 0 ){
        
        printf("\n%d", n);
        n--;    
    }
    
}