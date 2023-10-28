#include <stdio.h>
#include <string.h>

int main(){

    char nome, sexo, valSexo[10];
    int idade, voto, continua;
    int contM = 0, contF = 0;
    int sam = 0, alex = 0, dzsenifer = 0, amandine = 0, marta = 0;
    int entrevistados = 0, parametro = 0;
    char nome_parametro[30];

    do {
        printf("Digite o seu nome: ");
        fgets(nome, 40, stdin);
        __fpurge(stdin);
        
        do {
            printf("Digite sua idade: ");
            scanf("%d", &idade);
            
            if (idade < 12) {
                printf ("\nValor invalido\n");
            }

        } while (idade < 12);

        do {
            printf("Digite seu sexo ( 'M' para masculino e 'F' para feminino): ");
            scanf("%c", &sexo);
            
            switch (sexo){
            
                case 'M':
                    strcpy (valSexo, "Masculino");
                    contM++;
                    break;
                case 'F':
                    strcpy (valSexo, "Feminino");
                    contF++;
                    break;

            default:
                printf("Valor invalido\n");
                break;
            }
            __fpurge(stdin);
        } while (sexo != 'M' && sexo != 'F');

        do {
            printf("\n------------ JOGADORA ------------\n");
            printf("\n 1- Sam Kerr (Austrália) ");
            printf("\n 2- Alex Morgan (Estados Unidos) ");
            printf("\n 3- Dzsenifer Marozsan (Alemanha) ");
            printf("\n 4- Amandine Henry (França) ");
            printf("\n 5- Marta Vieira (Brazil) ");
            printf("----------------------------------\n");
            printf("Digite o numero do voto: ");
            scanf("%d", &voto);
            
            switch (voto){
            
                case 1:
                    sam++;
                    break;
                case 2:
                    alex++;
                    break;            
                case 3:
                    dzsenifer++;
                    break;            
                case 4:
                    amandine++;
                    break;            
                case 5:
                    marta++;
                    break;        
            default:
                printf("Valor invalido\n");
                break;
            }
        }while(voto != 1 && voto != 2 && voto != 3 && voto != 4 && voto != 5);
                
        if ((voto == 5) && (idade >= 18)){
            parametro++;
        }
        
        entrevistados++;

        if (entrevistados >= 5 && entrevistados <= 30){
            printf("\n\nContinuar com a pesquisa (Aperte 1 para encerrar)? ");
            scanf("%d", &continua);
            __fpurge(stdin);
        } else if (entrevistados > 30){
            continua = 1;
        } else if (entrevistados < 5){
            continua != 1;
        }

    } while (continua != 1);

    if (continua == 1) {
            printf("\n----- FIM DA PESQUISA -----\n");
        }
    
    printf("\n******* RESULTADO *******");
    printf("\n Sam Kerr = %d", sam);
    printf("\n Alex Morgan = %d ", alex);
    printf("\n Dzsenifer Marozsan = %d ", dzsenifer);
    printf("\n Amandine Henry = %d ", amandine);
    printf("\n Marta Vieira = %d ", marta);
    printf("\n*************************\n");

    if ((sam > alex) && (sam > dzsenifer)  && (sam > amandine)  && (sam > marta)){ 
        printf("A jogadora mais votada foi a SAM KERR");  
    } else if ((alex > sam) && (alex > dzsenifer)  && (alex > amandine)  && (alex > marta)){ 
        printf("A jogadora mais votada foi a ALEX MORGAN");
    } else if ((amandine > sam) && (amandine > alex)  && (amandine > dzsenifer)  && (amandine > marta)){ 
        printf("A jogadora mais votada foi a DZSEIFER MAROZSAN");
    } else if ((dzsenifer > sam) && (dzsenifer > alex)  && (dzsenifer > amandine)  && (dzsenifer > marta)){ 
        printf("A jogadora mais votada foi a AMANDINE HENRY");
    } else if ((marta > sam) && (marta > alex) && (marta > dzsenifer)  && (marta > amandine)){ 
        printf("A jogadora mais votada foi a MARTA VIEIRA");
    } else {
        printf("Houve um empate, as jogadoras mais votada foram:\n");
    }
    printf("%d mulheres participaram da pesquisa.", contF);

        printf("\n-------------------------------------");
        printf("\n----- Habitante Nº %d ---------------", entrevistados);
        printf("\n-------------------------------------");
        printf("\n--- Sexo: %s", valSexo);
        printf("\n--- voto: %s", valvoto);
        printf("\n--- Cabelo: %s", valCab);
        printf("\n--- Idade: %d anos", idade);
        printf("\n--- Salario: R$ %.2f\n", salario);
        printf("-------------------------------------");

    porcParametro = (parametro * 100) / (entrevistados - 1); 
    
    printf("\n---------------------------------------------------------------------------");
    printf("\n Porcetagem de Mulheres, entre 18 e 35 anos, com cabelos e voto castanhos");
    printf("\n      %.2f %%", porcParametro);
    printf("\n---------------------------------------------------------------------------");
    
    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char jogadoras[][50] = {
        "Sam Kerr - Austrália",
        "Alex Morgan - Estados Unidos",
        "Dzsenifer Marozsan - Alemanha",
        "Amandine Henry - França",
        "Marta Vieira - Brasil"
    };

    int votos[5] = {0};
    char nome[50];
    int idade;
    char sexo[50];

    int num_maior_idade = 0;
    int num_menor_idade = 0;
    int num_mulheres = 0;
    int num_marta_votos = 0;

    int num_entrevistados = 0;

    while (num_entrevistados < 300) {
        printf("Digite o nome: ");
        scanf("%s", nome);

        if (strcmp(nome, "fim") == 0 || num_entrevistados >= 300) {
            break;
        }

        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 13) {
            num_menor_idade++;
        } else {
            num_maior_idade++;
        }

        printf("Digite o sexo (masculino ou feminino): ");
        scanf("%s", sexo);

        if (strcmp(sexo, "feminino") == 0) {
            num_mulheres++;
        }

        printf("Digite o voto (1: Sam Kerr, 2: Alex Morgan, 3: Dzsenifer Marozsan, 4: Amandine Henry, 5: Marta Vieira): ");
        int voto;
        scanf("%d", &voto);

        if (voto >= 1 && voto <= 5) {
            votos[voto - 1]++;
            if (voto == 5 && idade >= 13) {
                num_marta_votos++;
            }
            num_entrevistados++;
        } else {
            printf("Voto inválido. Tente novamente.\n");
        }
    }

    printf("\nRelatórios:\n");
    printf("Quantidade de votos para cada jogadora:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s: %d votos\n", jogadoras[i], votos[i]);
    }

    printf("\nJogadora(s) mais votada(s):\n");
    int max_votos = votos[0];
    for (int i = 1; i < 5; i++) {
        if (votos[i] > max_votos) {
            max_votos = votos[i];
        }
    }
    for (int i = 0; i < 5; i++) {
        if (votos[i] == max_votos) {
            printf("%s\n", jogadoras[i]);
        }
    }

    printf("\nPessoas entrevistadas separadas por sexo, maior de idade e menor de idade:\n");
    printf("Mulheres: %d\n", num_mulheres);
    printf("Maior de idade: %d\n", num_maior_idade);
    printf("Menor de idade: %d\n", num_menor_idade);

    printf("\nPessoas maior de idade que votaram em Marta Vieira: %d\n", num_marta_votos);

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
  
    int idade,maiorIdade=0, menorIdade=0;
    int entrevistados=0, votos[7]={0}, martaVotos=0;
    char nome[50], sexo[50];
    char jogadoras[50];
    int numMulheres=0;

    while (entrevistados < 300) {
        printf("Digite o seu nome: ");
        fflush(stdin);
        scanf("%s", nome);

        if (strcmp(nome, "1") == 0) {
            break;
        }

        printf("Digite sua idade: ");
        fflush(stdin);
        scanf("%d", &idade);

        if (idade < 13) {
            menorIdade++;
        } else {
            maiorIdade++;
        }

        printf("Digite o sexo (masculino ou feminino): ");
        fflush(stdin);
        scanf("%s", sexo);

        if (strcmp(sexo, "feminino") == 0) {
            numMulheres++;
        }

        printf("Digite o seu voto: ");
        scanf("%s", nome);

        int voto_valido = 0;
        for (int i = 0; i < 7; i++) {
            if (strcmp(jogadoras[i], nome) == 0) {
                votos[i]++;
                if (strcmp(jogadoras[i], "Marta Vieira") == 0 && idade >= 13) {
                    martaVotos++;
                }
                voto_valido = 1;
                break;
            }
        }

        if (!voto_valido) {
            printf("Voto inválido. Tente novamente.\n");
        }

        entrevistados++;
    }

    printf("\nRelatórios:\n");
    printf("Quantidade de votos para cada jogadora:\n");
    for (int i = 0; i < 7; i++) {
        printf("%s: %d votos\n", jogadoras[i], votos[i]);
    }

    printf("\nJogadora(s) mais votada(s):\n");
    int max_votos = 0;
    for (int i = 0; i < 7; i++) {
        if (votos[i] > max_votos) {
            max_votos = votos[i];
        }
    }
    for (int i = 0; i < 7; i++) {
        if (votos[i] == max_votos) {
            printf("%s\n", jogadoras[i]);
        }
    }

    printf("\nPessoas entrevistadas separadas por sexo, maior de idade e menor de idade:\n");
    printf("Mulheres: %d\n", numMulheres);
    printf("Maior de idade: %d\n", maiorIdade);
    printf("Menor de idade: %d\n", menorIdade);

    printf("\nPessoas maior de idade que votaram em Marta Vieira: %d\n", martaVotos);

    return 0;
}