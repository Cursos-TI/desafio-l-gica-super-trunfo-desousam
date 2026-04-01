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
    
}