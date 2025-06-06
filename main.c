#include <stdio.h>

int main()
{
    // DADOS CARTA NÚMERO 1
    char pais1[40];
    long int populacao1;
    float area1;
    float pib1;
    int n_pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float superPoder1;

    // DADOS CARTA NÚMERO 2
    char pais2[40];
    long int populacao2;
    float area2;
    float pib2;
    int n_pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float superPoder2;

    // ENTRADA DE DADOS CARTA NÚMERO 1

    printf("Digite o País da Primeira carta: \n");
    scanf(" %s", &pais1);

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
    printf("País: %c\n", pais1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", n_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("O Superpoder é de:%.2f \n\n", superPoder1);

    // ENTRADA DE DADOS CARTA NÚMERO 2
    printf("Digite o País da Segunda carta: \n");
    scanf(" %s", &pais2);

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
    printf("País: %c\n", pais2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("O Superpoder é de:%.2f \n\n", superPoder2);

    // COMPARAR RESULTADO FINAL DOS PONTOS

    int opcao;
    printf("digite qual atributo quer comparar\n 1- População \n 2- Área \n 3-PIB \n 4- Numero de pontos turisticos \n 5- Densidade demografica \n 6- PIB per capita \n 7- SuperPoder \n");

    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        /* Comparar populacao */
        if (populacao1 > populacao2)
        {
            printf("Carta - 1 Ganhou em população por: %ld \n", populacao1);
        }
        else
        {
            printf("Carta - 2 Ganhou em população por: %ld \n", populacao2);
        }

        break;

    case 2:
        /* Comparar area */
        if (area1 > area2)
        {
            printf("Carta - 1 Ganhou em área por: %f \n", area1);
        }
        else
        {
            printf("Carta - 2 Ganhou em área por: %f \n", area2);
        }
        break;

    case 3:
        /* Comparar pib */
        if (pib1 > pib2)
        {
            printf("Carta - 1 Ganhou em PIB por: %f \n", pib1);
        }
        else
        {
            printf("Carta - 2 Ganhou em PIB por: %f \n", pib2);
        }
        break;

    case 4:
        /* Comparar pontos turisticos */
        if (n_pontos_turisticos1 > n_pontos_turisticos2)
        {
            printf("Carta - 1 Ganhou em Pontos turisticos por: %d \n", n_pontos_turisticos1);
        }
        else
        {
            printf("Carta - 2 Ganhou em Pontos turisticos por: %d \n", n_pontos_turisticos2);
        }
        break;

    case 5:
        /* Comparar densidade */
        if (densidade1 < densidade2)
        {
            printf("Carta - 1 Ganhou em Densidade por: %f \n", densidade1);
        }
        else
        {
            printf("Carta - 2 Ganhou em Densidade por: %f \n", densidade2);
        }
        break;

    case 6:
        /* Comparar pib per capita */
        if (pib_per_capita1 > pib_per_capita2)
        {
            printf("Carta - 1 Ganhou em PIB per capita por: %f \n", pib_per_capita1);
        }
        else
        {
            printf("Carta - 2 Ganhou em PIB per capita por: %f \n", pib_per_capita2);
        }
        break;

    case 7:
        /* Comparar super poder */
        if (superPoder1 > superPoder2)
        {
            printf("Carta - 1 Ganhou em SuperPoder por: %f \n", superPoder1);
        }
        else
        {
            printf("Carta - 2 Ganhou em SuperPoder por: %f \n", superPoder2);
        }
        break;

        break;

    default:
        printf("Opção inválida");
        break;
    }
    return 0;
}