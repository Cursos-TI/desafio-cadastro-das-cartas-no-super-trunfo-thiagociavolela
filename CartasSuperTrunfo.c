#include <stdio.h>

int main() {
    // Declaração das variáveis
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;

    printf("=======================\n");
    printf("CADASTRO DE CIDADE\n");
    printf("=======================\n");

    // Entrada de dados
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome);
    /*Se colocar o nome com espaçamento ex: São paulo
    acontece um erro e o programa não é executado corretamente
    pesquisando encontrei uma solução*/
    //scanf("%s", nome);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);

    // Cálculo das novas propriedades
    densidade_populacional = (populacao / area) * (area > 0);
    pib_per_capita = ((pib * 1000000000) / populacao) * (populacao > 0);

    // Exibição dos Dados da Cidade Cadastrada
    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita);
    printf("============================\n");

    return 0;
}
