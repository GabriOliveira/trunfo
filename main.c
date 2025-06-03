#include <stdio.h>

int main()
{
    // DADOS CARTA NÚMERO 1
    char estado1;
    char cod_carta1[40];
    char nome_cidade1[40];
    long int populacao1;
    float area1;
    float pib1;
    int n_pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float superPoder1;

    // DADOS CARTA NÚMERO 2
    char estado2;
    char cod_carta2[40];
    char nome_cidade2[40];
    long int populacao2;
    float area2;
    float pib2;
    int n_pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float superPoder2;

    // ENTRADA DE DADOS CARTA NÚMERO 1

    printf("Digite o estado da primeira carta: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código da primeira carta: \n");
    scanf(" %s", &cod_carta1);

    printf("Digite o nome da cidade da primeira carta: \n");
    scanf(" %s", &nome_cidade1);

    printf("Digite a população da primeira carta: \n");
    scanf(" %d", &populacao1);

    printf("Digite o área em km² da primeira carta: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB da primeira carta:\n");
    scanf(" %f", &pib1);

    printf("Digite o Nº de pontos turísticos da primeira carta: \n");
    scanf(" %d", &n_pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;     // Cálculo de Densidade populacional usando casting
    pib1 *= 1000000000;                         // Transformando o pib em valor bilhões
    pib_per_capita1 = pib1 / (float)populacao1; // Cálculo de PIB per capita usando casting

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)n_pontos_turisticos1 + pib_per_capita1 + (densidade1 = area1 / (float)populacao1);

    printf("\nCARTA 1\n");
    printf("Estado0: %c\n", estado1);
    printf("Código: %s\n", cod_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", n_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("O Superpoder é de:%.2f \n\n", superPoder1);

    // ENTRADA DE DADOS CARTA NÚMERO 2
    printf("Digite o estado da Segunda carta: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código da Segunda carta: \n");
    scanf(" %s", &cod_carta2);

    printf("Digite o nome da cidade da Segunda carta: \n");
    scanf(" %s", &nome_cidade2);

    printf("Digite a população da Segunda carta: \n");
    scanf(" %d", &populacao2);

    printf("Digite o área em km² da Segunda carta: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da Segunda carta:\n");
    scanf(" %f", &pib2);

    printf("Digite o Nº de pontos turísticos da Segunda carta: \n");
    scanf(" %d", &n_pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;     // Cálculo de Densidade populacional usando casting
    pib2 *= 1000000000;                         // Transformando o pib em valor bilhões
    pib_per_capita2 = pib2 / (float)populacao2; // Cálculo de PIB per capita usando casting

    printf("\nCARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", cod_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("O Superpoder é de:%.2f \n\n", superPoder2);

    // VARIAVEIS DE COMPARAÇÃO DE ATRIBUTOS DA CARTA 1 E 2
    long int populacao_comparacao1, area_comparacao1, pib_comparacao1, pontos_turisticos_comparacao1, densidade_comparacao1, pib_per_capita_comparacao1, superpoder_comparacao1;

    // PONTOS SOBRE ATRIBUTOS DA CARTA 1
    populacao_comparacao1 = populacao1 <= populacao2;
    printf("\nCARTA 1\n Populacao pontos: %d \n", populacao_comparacao1);

    area_comparacao1 = area1 >= area2;
    printf("area pontos: %d \n", area_comparacao1);

    pib_comparacao1 = pib1 >= pib2;
    printf("PIB pontos: %d \n", pib_comparacao1);

    pontos_turisticos_comparacao1 = n_pontos_turisticos1 >= n_pontos_turisticos2;
    printf("Pontos Turisticos pontos: %d \n", pontos_turisticos_comparacao1);

    densidade_comparacao1 = densidade1 >= densidade2;
    printf("Densidade pontos: %d \n", densidade_comparacao1);

    pib_per_capita_comparacao1 = pib_per_capita1 >= pib_per_capita2;
    printf("PIB per capita pontos: %d \n", pib_per_capita_comparacao1);

    superpoder_comparacao1 = superPoder1 >= superPoder2;
    printf("SuperPoder pontos: %d \n", superpoder_comparacao1);

    return 0;
}