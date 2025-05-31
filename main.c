#include <stdio.h>

int main()
{
    char estado;
    char cod_carta[10];
    char nome_cidade[40];
    int populacao;
    float area_km2;
    float pib;
    int n_pontos_turisticos;

    // CARTA NÚMERO 1
    printf("Digite o estado da primeira carta: ");
    scanf(" %c", estado);

    printf("Digite o Código da primeira carta: ");
    scanf(" %s", cod_carta);

    printf("Digite o nome da cidade da primeira carta:");
    scanf(" %s", nome_cidade);

    printf("Digite a população da primeira carta: ");
    scanf(" %d", &populacao);

    printf("Digite o área em km² da primeira carta: ");
    scanf(" %f", &area_km2);

    printf("Digite o PIB da primeira carta: ");
    scanf(" %f", &pib);

    printf("Digite o Nº de pontos turísticos da primeira carta: ");
    scanf(" %d", &n_pontos_turisticos);

    printf("\n CARTA 1 \n\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %f Km² \n PIB: %f bilhões de reais \n Número de Pontos Turísticos: %d \n", estado, cod_carta, nome_cidade, populacao, area_km2, pib, n_pontos_turisticos);

    // CARTA NÚMERO 2
    printf("Digite o estado da Segunda carta: ");
    scanf(" %s", &estado);

    printf("Digite o Código da Segunda carta: ");
    scanf(" %s", &cod_carta);

    printf("Digite o nome da cidade da Segunda carta:");
    scanf(" %s", &nome_cidade);

    printf("Digite a população da Segunda carta: ");
    scanf(" %d", &populacao);

    printf("Digite o área em km² da Segunda carta: ");
    scanf(" %f", &area_km2);

    printf("Digite o PIB da Segunda carta: ");
    scanf(" %f", &pib);

    printf("Digite o Nº de pontos turísticos da Segunda carta: ");
    scanf(" %d", &n_pontos_turisticos);

    printf("\n CARTA 2 \n\n Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %f Km² \n PIB: %f bilhões de reais  \n Número de Pontos Turísticos: %d \n", estado, cod_carta, nome_cidade, populacao, area_km2, pib, n_pontos_turisticos);

    return 0;

}