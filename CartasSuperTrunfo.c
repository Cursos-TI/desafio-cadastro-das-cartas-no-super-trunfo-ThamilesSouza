#include <stdio.h>

int main() {
    // Dados da carta 1
    float populacao1 = 12325000.0;
    float area1 = 1521.11;
    float pib1 = 699280000000.0;
    // 699.28 bilhões em reais

    // Dados da carta2
    float populacao2= 6748000.0;
    float area2 = 1200.25;
    float pib2 = 44532910000000.0;
    //44532.91 bilhões em reais

    // Cálculos da carta 1
    float densidade1 = populacao1 / area1;
    float pib_per_capita1 = pib1 / populacao1;

    //Cálculos da carta 2
    float densidade2 = populacao2 / area2;
    float pib_per_capita2 = pib2 / populacao2;

    //Exibição dos resultados
    printf("carta 1\n");
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita1);

    //Exibição dos resultados
    printf("carta 2\n");
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$ %.2f\n\n", pib_per_capita2);

    
}