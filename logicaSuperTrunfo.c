#include <stdio.h>

int main() {

    int opcao;
    int atributo1, atributo2;

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

    // ===== VARIÁVEIS AUXILIARES =====
    float valor1Carta1 = 0, valor1Carta2 = 0;
    float valor2Carta1 = 0, valor2Carta2 = 0;

    float somaCarta1 = 0, somaCarta2 = 0;

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

    // ===== PRIMEIRO MENU =====
    printf("\n=== ESCOLHA O PRIMEIRO ATRIBUTO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo1);

    // ===== SEGUNDO MENU DINÂMICO =====
    printf("\n=== ESCOLHA O SEGUNDO ATRIBUTO ===\n");

    if (atributo1 != 1)
        printf("1 - Populacao\n");

    if (atributo1 != 2)
        printf("2 - Area\n");

    if (atributo1 != 3)
        printf("3 - PIB\n");

    if (atributo1 != 4)
        printf("4 - Pontos Turisticos\n");

    if (atributo1 != 5)
        printf("5 - Densidade Demografica\n");

    printf("Opcao: ");
    scanf("%d", &atributo2);

    // ===== ATRIBUTO 1 =====
    switch(atributo1) {

        case 1:
            valor1Carta1 = populacao1;
            valor1Carta2 = populacao2;
            printf("\nAtributo 1: Populacao\n");
            break;

        case 2:
            valor1Carta1 = area1;
            valor1Carta2 = area2;
            printf("\nAtributo 1: Area\n");
            break;

        case 3:
            valor1Carta1 = pib1;
            valor1Carta2 = pib2;
            printf("\nAtributo 1: PIB\n");
            break;

        case 4:
            valor1Carta1 = pontos1;
            valor1Carta2 = pontos2;
            printf("\nAtributo 1: Pontos Turisticos\n");
            break;

        case 5:
            valor1Carta1 = densidade1;
            valor1Carta2 = densidade2;
            printf("\nAtributo 1: Densidade Demografica\n");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ===== ATRIBUTO 2 =====
    switch(atributo2) {

        case 1:
            valor2Carta1 = populacao1;
            valor2Carta2 = populacao2;
            printf("Atributo 2: Populacao\n");
            break;

        case 2:
            valor2Carta1 = area1;
            valor2Carta2 = area2;
            printf("Atributo 2: Area\n");
            break;

        case 3:
            valor2Carta1 = pib1;
            valor2Carta2 = pib2;
            printf("Atributo 2: PIB\n");
            break;

        case 4:
            valor2Carta1 = pontos1;
            valor2Carta2 = pontos2;
            printf("Atributo 2: Pontos Turisticos\n");
            break;

        case 5:
            valor2Carta1 = densidade1;
            valor2Carta2 = densidade2;
            printf("Atributo 2: Densidade Demografica\n");
            break;

        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // ===== MOSTRAR VALORES =====
    printf("\n%s -> %.2f | %.2f\n",
           cidade1, valor1Carta1, valor2Carta1);

    printf("%s -> %.2f | %.2f\n",
           cidade2, valor1Carta2, valor2Carta2);

    // ===== SOMA DOS ATRIBUTOS =====

    // Densidade: menor vence
    somaCarta1 += (atributo1 == 5) ? (1 / valor1Carta1) : valor1Carta1;
    somaCarta2 += (atributo1 == 5) ? (1 / valor1Carta2) : valor1Carta2;

    somaCarta1 += (atributo2 == 5) ? (1 / valor2Carta1) : valor2Carta1;
    somaCarta2 += (atributo2 == 5) ? (1 / valor2Carta2) : valor2Carta2;

    // ===== RESULTADO =====
    printf("\n======= RESULTADO FINAL =======\n");

    printf("\nCarta 1: %s (%s)\n", cidade1, estado1);
    printf("Soma Total: %.2f\n", somaCarta1);

    printf("\nCarta 2: %s (%s)\n", cidade2, estado2);
    printf("Soma Total: %.2f\n", somaCarta2);

    // ===== VENCEDOR =====
    printf("\nResultado:\n");

    if (somaCarta1 > somaCarta2) {
        printf("Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (somaCarta2 > somaCarta1) {
        printf("Carta 2 (%s) venceu!\n", cidade2);
    }
    else {
        printf("Empate!\n");
    }

    return 0;
}