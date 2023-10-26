#include<stdio.h>
#include<math.h>

int main (void) {
    
    int a, b, c, delta;
    float x1, x2;
    
    printf("Digite a variavel A --> ");
    scanf("%d", &a);
    printf("Digite a variavel B --> ");
    scanf("%d", &b);
    printf("Digite a variavel C --> ");
    scanf("%d", &c);
    printf("\n");
    
    delta = (pow(b, 2)) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);

    if (a == 0) {
        printf("Nao eh equacao de segundo grau");
    }
    else if (delta < 0) {
        printf("Delta eh %d\n\n", delta);
        printf("Nao existe raiz");
    }
    else if ((delta == 0) || (delta == -0) ){
        printf("Delta eh %d\n\n", delta);
        printf("A raiz sera unica, no valor de %.2f", x1);
    }
    else if (delta > 0) {
        printf("Delta eh %d\n\n", delta);
        printf("A funcao tera duas raizes:");
        printf("\n    A raiz de x sera %.2f, quando a raiz de delta for positiva.", x1);
        printf("\n    A raiz de x sera %.2f, quando a raiz de delta for negativa.", x2);
    }
    
    
    return 0;
}