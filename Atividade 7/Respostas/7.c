#include<stdio.h>

main(){
   
    char cabelo, olhos, sexo;
    int contF = 0, contM = 0, contGeral = 0, contEspecifico = 0, idade;
    float salario, porcentagem;
   
    do{
    contGeral++;
    fflush(stdin);
    //Sexo
    do{
    printf("Digite o sexo(m/f): ");
    scanf("%c", &sexo);
    fflush(stdin);

    if(sexo =='m'){
    contM++;
    }else{
    contF++;
    }

    if(sexo != 'm' && sexo != 'f'){
    printf("Opcao invalida. Digite novamente");
    }
    }while(sexo != 'm' && sexo != 'f');
    // cor dos olhos  
    do{
    printf("Digite a cor dos olhos(a/v/c/p): ");
    scanf("%c",&olhos);
    fflush(stdin);

    if(olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p'){
    printf("Opcao invalida. Digite novamente\n");
    }
    }while(olhos != 'a' && olhos != 'v' && olhos != 'c' && olhos != 'p');
    // cor dos cabelos
    do{
    printf("Digite a cor do seu cabelo(l/c/p/r): ");
    scanf("%c",&cabelo);
    fflush(stdin);

    if(cabelo != 'l' && cabelo != 'c' && cabelo != 'p' && cabelo != 'r'){
    printf("Opcao invalida. Digite novamente\n");
    }
    }while(cabelo != 'l' && cabelo != 'c' && cabelo != 'p' && cabelo != 'r');

    // idade
    do{
    printf("Digite sua idade: ");
    scanf("%d",&idade);
    fflush(stdin);

    if(idade < 10 || idade > 100){
    printf("Opcao invalida. Digite novamente\n");
    }
    }while(idade != -1 && (idade < 10 || idade > 100));

    do{
    printf("Digite seu salario: ");
    scanf("%d",&salario);
    fflush(stdin);

    if(salario < 0){
    printf("Opcao invalida. Digite novamente\n");
    }
    }while(salario < 0);

    if(sexo == 'f' && cabelo == 'c' && olhos == 'c' && (idade >18 && idade <35)){
    contEspecifico++;
    }

    printf("Digite -1 para sair ou 0 para continuar\n");
    scanf("%d",&idade);

    }while(idade!= -1);
    
        porcentagem = (float)contEspecifico * 100 / contGeral;
    
        printf("\nPorcentagem cadastradas de mulheres especificas: %d", contEspecifico);
        printf("\nTotal cadastrados: %d", contGeral);
        printf("\nTotal cadastrados mulheres: %d", contF);
        printf("\nTotal cadastrados homens: %d", contM);
    
}