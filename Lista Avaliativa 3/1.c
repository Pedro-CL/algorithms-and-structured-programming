#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int codigo;
    char descricao[50];
    int quantidade;
    float valor;
} Produto;

typedef struct No {
    Produto produto;
    struct No* proximo;
} No;

No* adicionarProduto(No* lista) {
    No* novoProduto = (No*)malloc(sizeof(No));
    
    printf("\n------------ ADICONAR PRODUTO ------------\n");

    printf("\n    Digite o nome do produto: ");
    scanf("%s", novoProduto->produto.descricao);

    printf("    Codigo do produto: ");
    scanf("%d", &novoProduto->produto.codigo);
    
    
    printf("    Quantidade em estoque: ");
    scanf("%d", &novoProduto->produto.quantidade);

    // Adicionando validação para evitar quantidade negativa
    while (novoProduto->produto.quantidade < 0) {
        printf("\n    --------- VALOR INVALIDO ---------    ");
        printf("\n    ----- O valor deve ser >= 0 ------    ");
        printf("\n    ----------------------------------    ");
        printf("\n    --                                    ");
        printf("\n    -- Quantidade em estoque: ");
        scanf("%d", &novoProduto->produto.quantidade);
        printf("    --                                    ");
        printf("\n    ----------------------------------    \n");
    }
    
    printf("\n    Valor do produto: ");
    scanf("%f", &novoProduto->produto.valor);

    while (novoProduto->produto.valor < 0) {
        printf("\n    --------- VALOR INVALIDO ---------    ");
        printf("\n    ----- O valor deve ser >= 0 ------    ");
        printf("\n    ----------------------------------    ");
        printf("\n    --                                    ");
        printf("\n    -- Valor do produto: ");
        scanf("%f", &novoProduto->produto.valor);
        printf("    --                                    ");
        printf("\n    ----------------------------------    \n");
    }
    
    novoProduto->proximo = lista;
    
    printf("\n1\n------------------------------------------");
    printf("\n----- Produto adicionado com sucesso! ----");
    printf("\n------------------------------------------\n\n");

    return novoProduto;
}

void mostrarRelatorio(No* lista) {
    No* atual = lista;
    
    printf("\n\n--------- RELATORIO DE PRODUTOS ----------\n");
    while (atual != NULL) {
        printf("                                         |\n");
        printf("                                         |\n");
        printf("    ----- PRODUTO: %s ------\n", atual->produto.descricao);
        printf("    +                                    \n");
        printf("    +     Codigo: %d\n", atual->produto.codigo);
        printf("    +     Quantidade: %d\n", atual->produto.quantidade);
        printf("    +     Valor: R$ %.2f\n", atual->produto.valor);
        printf("    +                                    \n");
        printf("    ------------------------    \n");
        
        atual = atual->proximo;
    }
    printf("                                         |\n");
    printf("                                         |\n");
    printf("------------------------------------------\n\n");
}


void pesquisarProduto(No* lista) {
    int codigo;
    printf("\n\n----------- PESQUISAR PRODUTO ------------\n");
    printf("\n\nDigite o codigo do produto: ");
    scanf("%d", &codigo);
    
    No* atual = lista;
    while (atual != NULL) {
        if (atual->produto.codigo == codigo) {
            printf("\n\n    ----- PRODUTO ENCONTRADO -----    ");
            printf("\n    +                                    ");
            printf("\n    +     Descricao: %s\n", atual->produto.descricao);
            printf("    +     Codigo: %d\n", atual->produto.codigo);
            printf("    +     Quantidade: %d\n", atual->produto.quantidade);
            printf("    +     Valor: R$ %.2f\n", atual->produto.valor);
            printf("    +                                    ");
            printf("\n    ------------------------------    \n");
            printf("\n------------------------------------------\n\n");
            return;
        }
        atual = atual->proximo;
        
    }
    
    printf("\n------------- VALOR INVALIDO -------------");
    printf("\n--------- Produto nao encontrado ---------");
    printf("\n------------------------------------------\n\n");
}

No* removerProduto(No* lista) {
    int codigo;
    printf("\n\n------------ REMOVER PRODUTO -------------\n");
    printf("\n\nDigite o codigo do produto: ");
    scanf("%d", &codigo);
    
    No* anterior = NULL;
    No* atual = lista;
    
    while (atual != NULL) {
        if (atual->produto.codigo == codigo) {
            if (anterior == NULL) {
                lista = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            
            free(atual);
            printf("\n------------------------------------------");
            printf("\n----- Produto removido com sucesso! ------");
            printf("\n------------------------------------------\n\n");
            return lista;
        }
        
        anterior = atual;
        atual = atual->proximo;
    }
    printf("\n\n------------- VALOR INVALIDO -------------");
    printf("\n--------- Produto nao encontrado ---------");
    printf("\n------------------------------------------\n\n");
    return lista;
}

void liberarLista(No* lista) {
    No* atual = lista;
    while (atual != NULL) {
        No* proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }
}

int main() {
    No* lista = NULL;
    int opcao;
    
    printf("\n------------------------------------------\n");
    printf("\n      SISTEMA DE CONTROLE DE ESTOQUE      \n");
    printf("\n------------------------------------------\n");

    do {
        printf("\n================== MENU ==================\n\n");
        printf("        1 - Adicionar Produto\n");
        printf("        2 - Mostrar Relatorio\n");
        printf("        3 - Pesquisar Produto\n");
        printf("        4 - Remover Produto\n");
        printf("        0 - Sair\n");
        printf("\n==========================================\n");
        printf("\nDigite uma das opcoes acima: ");
        scanf("%d", &opcao);
        printf("\n==========================================\n");

        
        switch (opcao) {
            case 1:
                lista = adicionarProduto(lista);
                break;
            case 2:
                mostrarRelatorio(lista);
                break;
            case 3:
                pesquisarProduto(lista);
                break;
            case 4:
                lista = removerProduto(lista);
                break;
            case 0:
                liberarLista(lista);
                printf("Programa encerrado. Obrigado por usar o Sistema de Controle de Estoque!\n");
                break;
            default:
                printf("***** Opcao invalida.Tente novamente *****\n");
        }
    } while (opcao != 0);

    return 0;
}