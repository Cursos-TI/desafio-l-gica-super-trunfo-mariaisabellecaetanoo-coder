#include <stdio.h>

int main() {

    int opcao;

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

    // ===== EXIBIÇÃO DOS CÁLCULOS =====
    printf("\n=== DADOS CALCULADOS ===\n");

    printf("\nCarta 1 - %s\n", cidade1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2 - %s\n", cidade2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ===== MENU =====
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // ===== COMPARAÇÃO =====
    switch(opcao) {

        case 1:

            printf("\nComparacao por Populacao:\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", cidade1);
            }
            else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", cidade2);
            }
            else {
                printf("Empate!\n");
            }

            break;

        case 2:

            printf("\nComparacao por Area:\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", cidade1);
            }
            else if (area2 > area1) {
                printf("Vencedor: %s\n", cidade2);
            }
            else {
                printf("Empate!\n");
            }

            break;

        case 3:

            printf("\nComparacao por PIB:\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", cidade1);
            }
            else if (pib2 > pib1) {
                printf("Vencedor: %s\n", cidade2);
            }
            else {
                printf("Empate!\n");
            }

            break;

        case 4:

            printf("\nComparacao por Pontos Turisticos:\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", cidade1);
            }
            else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", cidade2);
            }
            else {
                printf("Empate!\n");
            }

            break;

        case 5:

            printf("\nComparacao por Densidade Demografica:\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);

            // MENOR valor vence
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", cidade1);
            }
            else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", cidade2);
            }
            else {
                printf("Empate!\n");
            }

            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}