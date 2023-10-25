#include<stdio.h>

main(){
    
    float p1, p2, p3, media;
    
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p1);
    
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p2);
    
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &p3);
    
    media = (p1 + p2 + (2 * p3)) / 3;
    
    printf("A media de sua nota: %.2f\n", media);
    
    if(media >= 7.0){
        printf("Aluno aprovado!");
    } else{
        printf("Aluno reprovado");
    }    
    
}