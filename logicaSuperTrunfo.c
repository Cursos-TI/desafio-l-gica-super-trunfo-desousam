#include <stdio.h>

int main(){

    // ================ CARTA 1 ================

    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1, pib1;
    int pontos1;

    float densidade1, pibPerCapita1;

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);
    getchar();

    printf("Nome da cidade: ");
    scanf("%[^\n]", cidade1);
    getchar();

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos1);


    // ================= CARTA 2 =================
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2, pib2;
    int pontos2;

    float densidade2, pibPerCapita2;

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);
    getchar();

    printf("Nome da cidade: ");
    scanf("%[^\n]", cidade2);
    getchar();

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos2);


    // ================= CÁLCULOS =================
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;


}