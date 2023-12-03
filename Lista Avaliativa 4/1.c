#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um veículo
typedef struct {
    char proprietario[50];
    char combustivel[10];
    char modelo[50];
    char cor[20];
    char chassi[20];
    int ano;
    char placa[8];
} Veiculo;

// Estrutura para o nó da lista encadeada
typedef struct No {
    Veiculo veiculo;
    struct No* proximo;
} No;

// Função para listar proprietários de carros do ano de 2010 ou posterior movidos a diesel
void listarProprietariosDiesel2010OuPosterior(No* lista) {
    No* atual = lista;

    printf("\nProprietários de carros do ano de 2010 ou posterior movidos a diesel:\n");
    while (atual != NULL) {
        if (atual->veiculo.ano >= 2010 && strcmp(atual->veiculo.combustivel, "diesel") == 0) {
            printf("%s\n", atual->veiculo.proprietario);
        }
        atual = atual->proximo;
    }
}

// Função para listar placas que começam com a letra J e terminam com 0, 2, 4 ou 7 e seus respectivos proprietários
void listarPlacasJ(No* lista) {
    No* atual = lista;

    printf("\nPlacas que começam com a letra J e terminam com 0, 2, 4 ou 7 e seus respectivos proprietários:\n");
    while (atual != NULL) {
        if (atual->veiculo.placa[0] == 'J' &&
            (atual->veiculo.placa[6] == '0' || atual->veiculo.placa[6] == '2' ||
             atual->veiculo.placa[6] == '4' || atual->veiculo.placa[6] == '7')) {
            printf("Placa: %s, Proprietário: %s\n", atual->veiculo.placa, atual->veiculo.proprietario);
        }
        atual = atual->proximo;
    }
}

// Função para listar modelo e cor de veículos com placas que possuem como segunda letra uma vogal
// e cuja soma dos valores numéricos fornece um número par
void listarModeloCorPlacasVogalSomaPar(No* lista) {
    No* atual = lista;

    printf("\nModelo e cor de veículos com placas que possuem como segunda letra uma vogal e cuja soma dos valores numéricos é par:\n");
    while (atual != NULL) {
        if (strchr("aeiouAEIOU", atual->veiculo.placa[1]) != NULL) {
            int somaNumerosPlaca = 0;
            for (int i = 0; i < 7; i++) {
                if (isdigit(atual->veiculo.placa[i])) {
                    somaNumerosPlaca += atual->veiculo.placa[i] - '0';
                }
            }

            if (somaNumerosPlaca % 2 == 0) {
                printf("Modelo: %s, Cor: %s\n", atual->veiculo.modelo, atual->veiculo.cor);
            }
        }
        atual = atual->proximo;
    }
}

// Função para trocar o proprietário de um veículo com base no número do chassi
// apenas para carros com placas que não possuam nenhum dígito igual a zero
void trocarProprietario(No* lista, const char* novoProprietario, const char* chassi) {
    No* atual = lista;

    while (atual != NULL) {
        if (strcmp(atual->veiculo.chassi, chassi) == 0) {
            // Verifica se a placa não possui dígito igual a zero
            if (strchr(atual->veiculo.placa, '0') == NULL) {
                strcpy(atual->veiculo.proprietario, novoProprietario);
                printf("Proprietário do veículo com chassi %s alterado para %s\n", chassi, novoProprietario);
            } else {
                printf("Não é possível alterar o proprietário do veículo com chassi %s, pois a placa possui dígito zero.\n", chassi);
            }
            return;
        }
        atual = atual->proximo;
    }

    printf("Veículo com chassi %s não encontrado.\n", chassi);
}

// Função para liberar a memória alocada pela lista encadeada
void liberarLista(No* lista) {
    No* atual = lista;
    while (atual != NULL) {
        No* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}

// Função principal (exemplo de uso)
int main() {
    // Inicializar a lista encadeada com alguns veículos (pode ser adaptado conforme sua implementação)
    No* lista = (No*)malloc(sizeof(No));
    strcpy(lista->veiculo.proprietario, "Proprietario1");
    strcpy(lista->veiculo.combustivel, "diesel");
    strcpy(lista->veiculo.modelo, "Modelo1");
    strcpy(lista->veiculo.cor, "Cor1");
    strcpy(lista->veiculo.chassi, "Chassi1");
    lista->veiculo.ano = 2012;
    strcpy(lista->veiculo.placa, "ABC1234");
    lista->proximo = NULL;

    // Chamar as funções conforme necessário
    listarProprietariosDiesel2010OuPosterior(lista);
    listarPlacasJ(lista);
    listarModeloCorPlacasVogalSomaPar(lista);
    trocarProprietario(lista, "NovoProprietario", "Chassi1");

    // Liberar a memória alocada pela lista
    liberarLista(lista);

    return 0;
}
