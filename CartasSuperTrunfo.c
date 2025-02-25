#include <stdio.h>

int main(){
    char estado[2], cidade[20], estado2[2], cidade2[20], cod1[3], cod2[3];
    int populacao, qtdturistico, populacao2, qtdturistico2;
    float area, pib, area2, pib2;

    printf("\n Bem vindo ao supertrunfo! \n \n Para iniciar crie duas cartas do jogo sobre paises. \n \n");


    printf("Carta 1:\n");
    printf("Digite aqui uma letra de A ate H para representar a o primeiro estado: ");
    scanf("%1s", estado);

    printf("Digite aqui um numero de 1 a 4 para representar o primeiro estado: ");
    scanf("%2s", cod1);

    printf("\nDigite aqui o nome da primeira cidade: ");
    scanf("%19s", cidade);

    printf("\nQual a populacao de %s? ", cidade);
    scanf("%d", &populacao);

    printf("\nQual a area de %s? ", cidade);
    scanf("%f", &area);

    printf("\nQual o pib de %s? ", cidade);
    scanf("%f", &pib);

    printf("\nQual a quantidade de pontos turisticos de %s? ", cidade);
    scanf("%d", &qtdturistico);


    printf(" \n Muito bem! Agora vamos para a nossa proxima carta! \n \n");


    printf("Carta 2: \n");
    printf("\nDigite aqui uma letra de A ate H para representar a o segundo estado: ");
    scanf("%1s", estado2);

    printf("Digite aqui um numero de 1 a 4 para representar o segundo estado: ");
    scanf("%2s", cod2);

    printf("\nDigite aqui o nome da segunda cidade:");
    scanf("%19s", cidade2);

    printf("\nQual a populacao de %s? ", cidade2);
    scanf("%d", &populacao2);

    printf("\nQual a area de %s? ", cidade2);
    scanf("%f", &area2);

    printf("\nQual o pib de %s? ", cidade2);
    scanf("%f", &pib2);

    printf("\nQual a quantidade de pontos turisticos de %s ?", cidade2);
    scanf("%d", &qtdturistico2);


    printf(" \n Carta1: \n");
    printf(" \n Estado: %s", estado);
    printf(" \n Codigo: %s0%s", estado, cod1);
    printf(" \n Cidade: %s", cidade);
    printf(" \n Populacao: %d", populacao);
    printf(" \n Area: %f", area);
    printf(" \n PIB: %f", pib);
    printf(" \n Pontos turisticos: %d \n \n", qtdturistico);

    printf(" \n Carta2: \n");
    printf(" \n Estado: %s", estado2);
    printf(" \n Codigo: %s0%s", estado2, cod2);
    printf(" \n Cidade: %s", cidade2);
    printf(" \n Populacao: %d", populacao2);
    printf(" \n Area: %f", area2);
    printf(" \n PIB: %f", pib2);
    printf(" \n Pontos turisticos: %d \n \n", qtdturistico2);

    return 0;
}