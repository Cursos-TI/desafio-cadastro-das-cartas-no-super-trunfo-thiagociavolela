#include <stdio.h>

int main() {
    // Declaração das variáveis para as duas cartas
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    int populacao1, populacao2; // Usando int para a população
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    printf("=======================\n");
    printf("CADASTRO DE CARTAS - SUPER TRUNFO PAÍSES\n");
    printf("=======================\n");

    // Entrada de dados para a Carta 1
    printf("\nCarta 1:\n");
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1); // Usando %d para int

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo dos atributos para a Carta 1
    densidade_populacional1 = (populacao1 / area1) * (area1 > 0);
    pib_per_capita1 = ((pib1 * 1000000000) / populacao1) * (populacao1 > 0);
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / (densidade_populacional1 + 1e-9)); // Evita divisão por zero

    // Entrada de dados para a Carta 2
    printf("\nCarta 2:\n");
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2); // Usando %d para int

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo dos atributos para a Carta 2
    densidade_populacional2 = (populacao2 / area2) * (area2 > 0);
    pib_per_capita2 = ((pib2 * 1000000000) / populacao2) * (populacao2 > 0);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / (densidade_populacional2 + 1e-9)); // Evita divisão por zero

    // Exibição dos dados das cartas
    printf("\nDados da Carta 1:\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nDados da Carta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação das cartas
    printf("\nComparação das Cartas:\n");

    // População
    printf("População: Carta 1 (%d) vs Carta 2 (%d) -> %d\n", populacao1, populacao2, populacao1 > populacao2 ? 1 : 0);

    // Área
    printf("Área: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %d\n", area1, area2, area1 > area2 ? 1 : 0);

    // PIB
    printf("PIB: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %d\n", pib1, pib2, pib1 > pib2 ? 1 : 0);

    // Pontos Turísticos
    printf("Pontos Turísticos: Carta 1 (%d) vs Carta 2 (%d) -> %d\n", pontos_turisticos1, pontos_turisticos2, pontos_turisticos1 > pontos_turisticos2 ? 1 : 0);

    // Densidade Populacional (menor valor vence)
    printf("Densidade Populacional: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %d\n", densidade_populacional1, densidade_populacional2, densidade_populacional1 < densidade_populacional2 ? 1 : 0);

    // PIB per Capita
    printf("PIB per Capita: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %d\n", pib_per_capita1, pib_per_capita2, pib_per_capita1 > pib_per_capita2 ? 1 : 0);

    // Super Poder
    printf("Super Poder: Carta 1 (%.2f) vs Carta 2 (%.2f) -> %d\n", super_poder1, super_poder2, super_poder1 > super_poder2 ? 1 : 0);

    return 0;
}