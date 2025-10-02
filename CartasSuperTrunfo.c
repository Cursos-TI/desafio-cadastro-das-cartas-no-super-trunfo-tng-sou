#include <stdio.h>

int main (){
    // Inicio colocando todos os códigos fontes, dicernindo "int", "float" e "char"
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
    float dens_populacional1, dens_populacional2, pibpercapita1, pibpercapita2;
    char codigodacarta1[10], codigodacarta2[10], cidade1[50], cidade2[50], estado1[5], estado2[5];
    // Inicio com titulo do jogo Super Trunfo
    printf("******* JOGO SUPER TRUNFO *******\n\n");

    printf("CARTA 1:\n");
    // Imprimindo os tópicos das carta pedindo para o usuario colocar os dados
    printf("Estado: ");
    scanf(" %s", estado1);

    printf("Código da Carta: ");
    scanf(" %s", codigodacarta1);

    printf("Cidade: ");
    scanf(" %s", cidade1);

    printf("População: ");
    scanf(" %d", &populacao1);

    printf("Área: ");
    scanf(" %f", &area1);

    printf("PIB: ");
    scanf(" %f", &pib1);

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    //Automatizando o calculo da Densidade Populacional
    dens_populacional1 = (populacao1 / area1);
    printf("Densidade Populacional: %f\n", dens_populacional1);
    //Automatizando o calculo do PIB Per Capita
    pibpercapita1 = (pib1 / populacao1);
    printf("PIB Per Capita: %f\n", pibpercapita1);

    // INICIO CARTA 02********
    printf("CARTA 2:\n");

    printf("Estado: ");
    scanf(" %s", estado2);

    printf("Código da Carta: ");
    scanf(" %s", codigodacarta2);

    printf("Cidade: ");
    scanf(" %s", cidade2);

    printf("População: ");
    scanf(" %d", &populacao2);

    printf("Área: ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf(" %f", &pib2);

    printf("Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    //Automatizando o calculo da Densidade Populacional
    dens_populacional2 = (populacao2 / area2);
    printf("Densidade Populacional: %f\n", dens_populacional2);
    //Automatizando o calculo do PIB Per Capita
    pibpercapita2 = (pib2 / populacao2);
    printf("PIB Per Capita: %f\n", pibpercapita2);

    return 0;
}
