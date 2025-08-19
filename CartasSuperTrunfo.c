#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    //Dados da carta linha a linha
    //inicio CARTA 1:

    char carta[20] = "Carta 1";
    printf("CARTA 1:\n");
    
    char estado[20] = "Bahia";
    printf("Estado: %s\n", estado);
    
    char codigo_da_carta[20] = "A01";
    printf("Código da Carta: %s\n", codigo_da_carta);

    char cidade[20] = "Salvador";
    printf("Cidade: %s\n", cidade);

    int populacao = 2.5;
    printf("População: %i Bilhões\n", populacao);  

    // %.2f para imprimir duas casas décimais:

    float area = 196.26;
    printf("Área: %.2f Km²\n", area);

    float pib = 63.0;
    printf("PIB: %.2f Bilhões\n", pib);

    int pontos_turisticos = 25;
    printf("Número de Pontos Turísticos: %i\n\n", pontos_turisticos);
    

    //inicio carta 2:
    char carta2[20] = "Carta 2";
    printf("CARTA 2:\n");

    char estado2[20] = "Santa Catarina";
    printf("Estado: %s\n", estado2);

    char codigo_da_carta2[20] = "A02";
    printf("Código da Carta: %s\n", codigo_da_carta2);

    char cidade2[20] = "Florianópolis";
    printf("Cidade: %s\n", cidade2);

    int populacao2 = 576;
    printf("População: %i Mil\n", populacao2);

    float area2 = 675.41;
    printf("Área: %.2f Km²\n", area2);

    float pib2 = 23.5;
    printf("PIB: %.2f Bilhões\n", pib2);

    int pontos_turisticos2 = 42;
    printf("Número de Pontos Turísticos: %i\n", pontos_turisticos2);


    return 0;
}
