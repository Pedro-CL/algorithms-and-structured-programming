#include<stdio.h>

int main (void) {
    
    float salarioAtual, tempoServico, salarioFinal, reajuste;
    
    printf("Digite o salario atual do funcionario --> ");
    scanf("%f", &salarioAtual);
    printf("Digite o tempo de servico do funcionario --> ");
    scanf("%f", &tempoServico);

    // Para aqueles com salário de até R$ 500,00.
    if((salarioAtual <= 500) && (tempoServico < 1)) {
        reajuste = salarioAtual * 0.25 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    } 
    else if((salarioAtual <= 500) && (tempoServico >= 1) && (tempoServico < 4)) {
        reajuste = (salarioAtual * 0.25) + 100 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual <= 500) && (tempoServico >= 4) && (tempoServico < 7)) {
        reajuste = (salarioAtual * 0.25) + 200 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual <= 500) && (tempoServico >= 7) && (tempoServico < 10)) {
        reajuste = (salarioAtual * 0.25) + 300 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual <= 500) && (tempoServico >= 10)) {
        reajuste = (salarioAtual * 0.25) + 500 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    
    // Para aqueles com salário maior que R$ 500,00 e menor que R$ 1.000,00.
    if((salarioAtual > 500) && (salarioAtual <= 1000) && (tempoServico < 1)) {
        reajuste = salarioAtual * 0.20 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    } 
    else if((salarioAtual > 500) && (salarioAtual <= 1000) && (tempoServico >= 1) && (tempoServico < 4)) {
        reajuste = (salarioAtual * 0.20) + 100 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 500) && (salarioAtual <= 1000) && (tempoServico >= 4) && (tempoServico < 7)) {
        reajuste = (salarioAtual * 0.20) + 200 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 500) && (salarioAtual <= 1000) && (tempoServico >= 7) && (tempoServico < 10)) {
        reajuste = (salarioAtual * 0.20) + 300 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 500) && (salarioAtual <= 1000) && (tempoServico >= 10)) {
        reajuste = (salarioAtual * 0.20) + 500 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    
    // Para aqueles com salário maior que R$ 1.000,00 e menor que R$ 1.500,00.
    if((salarioAtual > 1000) && (salarioAtual <= 1500) && (tempoServico < 1)) {
        reajuste = salarioAtual * 0.15 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    } 
    else if((salarioAtual > 1000) && (salarioAtual <= 1500) && (tempoServico >= 1) && (tempoServico < 4)) {
        reajuste = (salarioAtual * 0.15) + 100 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1000) && (salarioAtual <= 1500) && (tempoServico >= 4) && (tempoServico < 7)) {
        reajuste = (salarioAtual * 0.15) + 200 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1000) && (salarioAtual <= 1500) && (tempoServico >= 7) && (tempoServico < 10)) {
        reajuste = (salarioAtual * 0.15) + 300 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1000) && (salarioAtual <= 1500) && (tempoServico >= 10)) {
        reajuste = (salarioAtual * 0.15) + 500 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    
    // Para aqueles com salário maior que R$ 1.500,00 e menor que R$ 2.000,00.
    if((salarioAtual > 1500) && (salarioAtual <= 2000) && (tempoServico < 1)) {
        reajuste = salarioAtual * 0.10 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    } 
    else if((salarioAtual > 1500) && (salarioAtual <= 2000) && (tempoServico >= 1) && (tempoServico < 4)) {
        reajuste = (salarioAtual * 0.10) + 100 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1500) && (salarioAtual <= 2000) && (tempoServico >= 4) && (tempoServico < 7)) {
        reajuste = (salarioAtual * 0.10) + 200 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1500) && (salarioAtual <= 2000) && (tempoServico >= 7) && (tempoServico < 10)) {
        reajuste = (salarioAtual * 0.10) + 300 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 1500) && (salarioAtual <= 2000) && (tempoServico >= 10)) {
        reajuste = (salarioAtual * 0.10) + 500 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    
    // Para aqueles com salário maior que R$ 2.000,00.
    if((salarioAtual > 2000) && (tempoServico < 1)) {
        printf("\nEsse funcionario nao recebera reajuste!");
    } 
    else if((salarioAtual > 2000) && (tempoServico >= 1) && (tempoServico < 4)) {
        reajuste = (salarioAtual * 0) + 100 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 2000) && (tempoServico >= 4) && (tempoServico < 7)) {
        reajuste = (salarioAtual * 0) + 200 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 2000) && (tempoServico >= 7) && (tempoServico < 10)) {
        reajuste = (salarioAtual * 0) + 300 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    else if((salarioAtual > 2000) && (tempoServico >= 10)) {
        reajuste = (salarioAtual * 0) + 500 ;
        salarioFinal = salarioAtual + reajuste ;
        printf("\nReajuste sera --> R$ %.2f", reajuste);
        printf("\nO novo salario do funcionario sera --> R$ %.2f", salarioFinal);
    }
    
    return 0;
}
