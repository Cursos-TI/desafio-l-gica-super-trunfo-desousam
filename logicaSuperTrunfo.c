#include <stdio.h>

int main() {

    // ================ CARTAS ================
    char cidade1[] = "Sao Paulo";
    int populacao1 = 12345000;
    float area1 = 1521.11, pib1 = 699.28;
    int pontos1 = 50;
    
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6789000;
    float area2 = 1200.25, pib2 = 300.50;
    int pontos2 = 30;
    
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2; 
    
    // ================ MENU ===============
    int op1, op2;

    printf("=== SUPER TRUNFO - NIVEL MESTRE ===\n");

    printf("\nEscola o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade\n");
    scanf("%d", &op1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    scanf("%d", &op2);

    if (op1 == op2) {
        printf("Erro: atributos iguais!\n");
        return 0;
    }

    float valor1_c1 = 0, valor1_c2 =0;
    float valor2_c1 = 0, valor2_c2 =0;

    char nomeAttr1[30], nomeAttr2[30];

    // =============== ATRIBUTO 1 ===============
    switch (op1)
    {
    case 1:
        valor1_c1 = populacao1;
        valor1_c2 = populacao2;
        sprintf(nomeAttr1, "Populacao");
        break;
    case 2:
        valor1_c1 = area1;
        valor1_c2 = area2;
        sprintf(nomeAttr1, "Area");
        break;
    case 3:
        valor1_c1 = pib1;
        valor1_c2 = pib2;
        sprintf(nomeAttr1, "PIB");
    case 4:
        valor1_c1 = pontos1;
        valor1_c2 = pontos2;
        sprintf(nomeAttr1, "Pontos Turisticos");
        break;
    case 5:
        valor1_c1 = densidade1;
        valor1_c2 = densidade2;
        sprintf(nomeAttr1, "Densidade");
        break;
    default:
        printf("Opcao invalida!\n");
        return 0;
    }

    // =============== ATRIBUTO 2 ===============

    switch(op2) 
    {
    case 1:
        valor2_c1 = populacao1;
        valor2_c2 = populacao2;
        sprintf(nomeAttr2, "Populacao");
        break;
    case 2:
        valor2_c1 = area1;
        valor2_c2 = area2;
        sprintf(nomeAttr2, "Area");
        break;
    case 3:
        valor2_c1 = pib1;
        valor2_c2 = pib2;
        sprintf(nomeAttr2, "PIB");
        break;
    case 4:
        valor2_c1 = pontos1;
        valor2_c2 = pontos2;
        sprintf(nomeAttr2, "Pontos Turisticos");
        break;
    case 5:
        valor2_c1 = densidade1;
        valor2_c2 = densidade2;
        sprintf(nomeAttr2, "Densidade");
        break;
    default:
        printf("Opcao invalida!\n");
        return 0;
    }

    return 0;
}