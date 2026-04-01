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

    

    return 0;
}