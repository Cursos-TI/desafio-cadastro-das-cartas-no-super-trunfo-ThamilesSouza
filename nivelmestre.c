#include <stdio.h>

typedef struct {
    unsigned long int populacao;
    float area;
    float pib; // em bilhões
    int pontos_turisticos;
    float densidade;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular densidade
float calcular_densidade(unsigned long int populacao, float area) {
    return populacao / area;
}

// Função para calcular PIB per capita
float calcular_pib_per_capita(float pib, unsigned long int populacao) {
    return (pib * 1000000000.0f) / populacao;
}

// Função para calcular super poder
float calcular_super_poder(Carta c) {
    return (float)c.populacao + c.area + (c.pib * 1000000000.0f) +
           c.pontos_turisticos + c.pib_per_capita + (1.0f / c.densidade);
}

int main() {
    // Dados da carta 1
    Carta carta1;
    carta1.populacao = 12325000;
    carta1.area = 1521.11f;
    carta1.pib = 699.28f;
    carta1.pontos_turisticos = 50;
    carta1.densidade = calcular_densidade(carta1.populacao, carta1.area);
    carta1.pib_per_capita = calcular_pib_per_capita(carta1.pib, carta1.populacao);
    carta1.super_poder = calcular_super_poder(carta1);

    // Dados da carta 2
    Carta carta2;
    carta2.populacao = 6748000;
    carta2.area = 1200.25f;
    carta2.pib = 300.50f;
    carta2.pontos_turisticos = 30;
    carta2.densidade = calcular_densidade(carta2.populacao, carta2.area);
    carta2.pib_per_capita = calcular_pib_per_capita(carta2.pib, carta2.populacao);
    carta2.super_poder = calcular_super_poder(carta2);

    // Comparações: 1 se carta1 vence, 0 se carta2 vence
    printf("Comparações (1 = carta 1 vence | 0 = carta 2 vence)\n");
    printf("População: %d\n", carta1.populacao < carta2.populacao ? 1 : 0);
    printf("Área: %d\n", carta1.area < carta2.area ? 1 : 0);
    printf("PIB: %d\n", carta1.pib < carta2.pib ? 1 : 0);
    printf("Pontos turísticos: %d\n", carta1.pontos_turisticos < carta2.pontos_turisticos ? 1 : 0);
    printf("PIB per capita: %d\n", carta1.pib_per_capita < carta2.pib_per_capita ? 1 : 0);
    printf("Densidade populacional: %d\n", carta1.densidade < carta2.densidade ? 1 : 0);

    // Exibe super poderes
    printf("\nSuper poder carta 1: %.2f\n", carta1.super_poder);
    printf("Super poder carta 2: %.2f\n", carta2.super_poder);
    printf("Carta vencedora pelo super poder: %s\n", 
           carta1.super_poder < carta2.super_poder ? "Carta 1" : "Carta 2");

    return 0;
}