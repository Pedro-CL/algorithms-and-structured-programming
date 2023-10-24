#include<stdio.h>
#include<locale.h>
main(){
    //Definir os acentos em português
	setlocale(LC_ALL, "portuguese");
    //Declaração das variaveis
    char nome[20];
    int idade = 0;
    char matricula[20];
    char endereco [200];
    char curso   [50];
    char period  [20];
    char discipli[50];
    float valMensal = 0;
    //Cabeçalho
    printf("***************CADASTRO***************\n"); 
	printf("--------------------------------------\n"); 
	//Exibir texto
    printf("\nDigite o seu nome: ");
    //Guardar o valor na variavel 'nome' até 20 caracteres
    fgets(nome, 20, stdin);
    fflush(stdin);
     
    printf("\nDigite a idade: ");
    scanf("%d", &idade);
    fflush(stdin);
     
    printf("\nDigite o número da matrícula: ");
    fgets(matricula, 20, stdin);
    fflush(stdin);
    
    printf("\nDigite o seu endereço: ");
    fgets(endereco, 200, stdin);
    fflush(stdin);
     
    printf("\nDigite o curso: ");
    fgets(curso, 50, stdin);
    fflush(stdin);
    
    printf("\nDigite seu período: ");
    fgets(period, 20, stdin);
    fflush(stdin);
    
    printf("\nDigite a disciplina: ");
    fgets(discipli, 50, stdin);
    fflush(stdin);
    
    printf("\nDigite o valor mensal: ");
    scanf("%f", &valMensal);
    //Cabeçalho
	printf("\n\n**************Seus dados**************\n");
	printf("--------------------------------------\n"); 
    //Exibir valor 'nome'
	printf("\nNome: %s", nome);
	printf("\nIdade: %i", idade);
	printf("\nMatícula: %s", matricula);
	printf("\nEndereço: %s", endereco);
	printf("\nCurso: %s", curso);
	printf("\nPeríodo: %s", period);
	printf("\nDisciplina: %s", discipli);
	printf("\nValor Mensal: %.2f", valMensal);

}