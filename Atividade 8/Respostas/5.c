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
        scanf(" %s", nome);

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
        scanf(" %s", sexo);

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
