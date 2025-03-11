#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    printf("Carta 01\n");

    int numerodePontosTuristicos;
    float PIB, area, divisaoDensidade, divisaoPIB;
    double populacao;
    char estado[50], cidade[50], codigoCidade[4];

    printf("Qual é o estado?: \n");
    scanf(" %s", estado);

    printf("Qual é a cidade?: \n");
    scanf(" %s", cidade);

    printf("Código da cidade: \n");
    scanf(" %s", codigoCidade);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Área total da cidade?: \n");
    scanf(" %f", &area);

    printf("Estimativa total da população?: \n");
    scanf("%lf", &populacao);

    printf("Há quantos pontos turísticos na cidade?: \n");
    scanf("%d", &numerodePontosTuristicos);

    divisaoDensidade = populacao / area;
    printf("Densidade Populacional: %f\n", divisaoDensidade);

    divisaoPIB = PIB / populacao;
    printf("PIB per Capita: %f\n", divisaoPIB);

    printf("\n");
    printf("Carta 02\n");

    int numerodePontosTuristicos2;
    float PIB2, area2, divisaoDensidade2, divisaoPIB2;
    double populacao2;
    char estado2[50], cidade2[50], codigoCidade2[4];

    printf("Qual é o estado?: \n");
    scanf(" %s", estado2);

    printf("Qual é a cidade?: \n");
    scanf(" %s", cidade2);

    printf("Código da cidade: \n");
    scanf(" %s", codigoCidade2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Área total da cidade?: \n");
    scanf("%f", &area2);

    printf("Estimativa total da população?: \n");
    scanf("%lf", &populacao2);

    printf("Há quantos pontos turísticos na cidade?: \n");
    scanf("%d", &numerodePontosTuristicos2);

    divisaoDensidade2 = populacao2 / area2;
    printf("Densidade Populacional: %f\n", divisaoDensidade2);

    divisaoPIB2 = PIB2 / populacao2;
    printf("PIB per Capita: %f\n\n", divisaoPIB2);

    
    printf("----- Carta 01 -----\n");
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("Código da Cidade: %s\n", codigoCidade);
    printf("PIB: %f\n", PIB);
    printf("Área: %f\n", area);
    printf("População: %lf\n", populacao);
    printf("Pontos turísticos: %d\n", numerodePontosTuristicos);
    printf("Densidade Populacional: %f\n", divisaoDensidade);
    printf("PIB per Capita: %f\n", divisaoPIB2);

    printf("----- Carta 02 -----\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código da Cidade: %s\n", codigoCidade2);
    printf("PIB: %f\n", PIB2);
    printf("Área: %f\n", area2);
    printf("População: %lf\n", populacao2);
    printf("Pontos turísticos: %d\n", numerodePontosTuristicos2);
    printf("Densidade Populacional: %f\n", divisaoDensidade2);
    printf("PIB per Capita: %f\n", divisaoPIB2);




    return 0;
}