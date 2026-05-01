#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
int main(){

    char estado1 = 'A';
    char codigo1[10] = "A01";
    char cidade1[20] = "São Paulo";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;
    float densidade_pop1 = populacao1 / area1;
    float pib_per_cap1 = (pib1 * 1000000000) / populacao1;
    float superPoder1 = populacao1 + area1 + pib1 + pontos1 + (1 / densidade_pop1) + pib_per_cap1;
 
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_per_cap1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    char estado2 = 'B';
    char codigo2[10] = "B02";
    char cidade2[20] = "Rio de Janeiro";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontos2 = 30;
    float densidade_pop2 = populacao2 / area2;
    float pib_per_cap2 = (pib2 * 1000000000) / populacao2;
    float superPoder2 = populacao2 + area2 + pib2 + pontos2 + (1 / densidade_pop2) + pib_per_cap2;
    
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_per_cap2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    printf("Comparação de Cartas: \n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    printf("Densidade Populacional: %d\n", densidade_pop1 < densidade_pop2);
    printf("PIB per Capita: %d\n", pib_per_cap1 > pib_per_cap2);
    printf("Super Poder: %d\n\n", superPoder1 > superPoder2);

return 0;

} 