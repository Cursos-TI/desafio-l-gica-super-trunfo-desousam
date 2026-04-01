#include <stdio.h>

int main() {

    // ================ CARTA 1 ================
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12345000;
    float area1 = 1521.11, pib1 = 699.28;
    int pontos1 = 50;

    float densidade1, pibPerCapita1;

    // ================ CARTA 2 ================
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6789000;
    float area2 = 1200.25, pib2 = 300.50;
    int pontos2 = 30;

    float densidade2, pibPerCapita2;   

    // ================ CALCULOS ================
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;
    
    // ================ MENU ===============
    int opcao;

    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");

    switch (opcao)
    {
    case 1:
        printf("Atributo: Populacao\n");
        printf("%s: %d\n", cidade1, populacao1);
        printf("%s: %d\n", cidade2, populacao2);

        if (populacao1 > populacao2) {
            printf("Vencedor: %s\n", cidade1);
        } else if (populacao2 > populacao1) {
            printf("Vencedor: %s\n", cidade2);
        } else {
            printf("Empate!\n");
        }
        break;

    case 2:
        printf("Atributo: Area\n");
        printf("%s: %.2f\n", cidade1, area1);
        printf("%s: %.2f\n", cidade2, area2);

        if (area1 > area2) {
            printf("Vencedor: %s\n", cidade1);
        } else if (area2 > area1) {
            printf("Vencedor: %s\n", cidade2);
        } else {
            printf("Empate!\n");
        }
        break;

    case 3:
        printf("Atributo: PIB\n");
        printf("%s: %.2f\n", cidade1, pib1);
        printf("%s: %.2f\n", cidade2, pib2);

        if (pib1 > pib2) {
            printf("Vencedor: %s\n", cidade1);
        } else if (pib2 > pib1) {
            printf("Vencedor: %s\n", cidade2);
        } else {
            printf("Empate!\n");
        }
        break;

    case 4:
        printf("Atributo: Ponto Turistico\n");
        printf("%s: %d\n", cidade1, pontos1);
        printf("%s: %d\n", cidade2, pontos2);

        if (pontos1 > pontos2) {
            printf("Vencedor: %s\n", cidade1);
        } else if (pontos2 > pontos1) {
            printf("Vencedor: %s\n", cidade2);
        } else {
            printf("Empate!\n");
        }
        break;

    case 5:
        printf("Atributo: Densidade Demografica\n");
        printf("%s: %.2f\n", cidade1, densidade1);
        printf("%s: %.2f\n", cidade2, densidade2);

        // REGRA INVERTIDA
        if (densidade1 < densidade2) {
            printf("Vencedor: %s\n", cidade1);
        } else if (densidade2 < densidade2) {
            printf("Vencedor: %s\n", cidade2);
        } else {
            printf("Empate!\n");
        }
        break;
    
    default:
        printf("Opcao invalida!\n");
    }

    return 0;
}