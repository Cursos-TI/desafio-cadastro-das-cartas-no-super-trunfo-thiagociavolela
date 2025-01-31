#include <stdio.h>

int main() {
    // Definição das variáveis para cada atributo da cidade
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

    // Cadastro das Cartas
    printf("=======================\n");
    printf("CADASTRO DE CIDADES\n");
    printf("=======================\n");

    // Solicita e captura o código da cidade
    printf("Digite o código da cidade: \n");
    scanf("%s", codigo);  

    // Solicita e captura o nome da cidade
    printf("Digite o nome da cidade: \n");
    /*Se colocar o nome com espaçamento ex: São paulo
    acontece um erro e o programa não é executado corretamente
    pesquisando encontrei uma solução*/
    //scanf("%s", nome);
    scanf(" %[^\n]", nome);    

    // Solicita e captura a população da cidade
    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao);

    // Solicita e captura a área da cidade
    printf("Digite a área da cidade (em km): \n");
    scanf("%f", &area);

    // Solicita e captura o PIB da cidade
    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &pib);

    // Solicita e captura o número de pontos turísticos da cidade
    printf("Digite o número de pontos turísticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas
    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %2.f km\n", area);
    printf("PIB: %2.f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
