#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1[50];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    float densidade1, pibPerCapita1;

    // ===== CARTA 2 =====
    char estado2[50];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    float densidade2, pibPerCapita2;

    // ===== ENTRADA CARTA 1 =====
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);

    // ===== ENTRADA CARTA 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %[^\n]", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);

    // ===== CÁLCULOS =====
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===== EXIBIÇÃO DOS DADOS =====
    printf("\n--- Carta 1 ---\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibPerCapita1);

    printf("\n--- Carta 2 ---\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibPerCapita2);

    // ===== COMPARAÇÃO =====
    printf("\nComparacao de cartas (Atributo: Populacao):\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}