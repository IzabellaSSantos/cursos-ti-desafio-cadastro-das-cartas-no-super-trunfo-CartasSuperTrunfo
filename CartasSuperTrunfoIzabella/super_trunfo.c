#include <stdio.h>

int main() {
    printf("Desafio Super Trunfo!\n");
    printf("Carta 01\n");

    int numerodePontosTuristicos;
    float PIB, area;
    double populacao;
    char nomeEstado[50], nomeCidade[50], codigoCidade[4];

    printf("Qual é o nome do estado?: \n");
    scanf("%s", nomeEstado);

    printf("Qual é o nome da cidade?: \n");
    scanf(" %s", nomeCidade);

    printf("Código da cidade: \n");
    scanf(" %s", codigoCidade);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB);

    printf("Qual é a área total da cidade?: \n");
    scanf("%f", &area);

    printf("Qual a estimativa total da população?: \n");
    scanf("%lf", &populacao);

    printf("Há quantos pontos turísticos na cidade?: \n");
    scanf("%d", &numerodePontosTuristicos);

    printf("\n");
    printf("Carta 02\n");

    int numerodePontosTuristicos2;
    float PIB2, area2;
    double populacao2;
    char nomeEstado2[50], nomeCidade2[50], codigoCidade2[4];

    printf("Qual é o nome do estado?: \n");
    scanf("%s", nomeEstado2);

    printf("Qual é o nome da cidade?: \n");
    scanf(" %s", nomeCidade2);

    printf("Código da cidade: \n");
    scanf(" %s", codigoCidade2);

    printf("Digite o PIB: \n");
    scanf(" %f", &PIB2);

    printf("Qual é a área total da cidade?: \n");
    scanf("%f", &area2);

    printf("Qual a estimativa total da população?: \n");
    scanf("%lf", &populacao2);

    printf("Há quantos pontos turísticos na cidade?: \n");
    scanf("%d", &numerodePontosTuristicos2);

    printf("----- Carta 01 -----\n");
    printf("Estado: %s\n", nomeEstado);
    printf("Cidade: %s\n", nomeCidade);
    printf("Código da Cidade: %s\n", codigoCidade);
    printf("PIB: %f\n", PIB);
    printf("Área: %f\n", area);
    printf("População: %lf\n", populacao);
    printf("Pontos turísticos: %d\n\n", numerodePontosTuristicos);

    printf("----- Carta 02 -----\n");
    printf("Estado: %s\n", nomeEstado2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("Código da Cidade: %s\n", codigoCidade2);
    printf("PIB: %f\n", PIB2);
    printf("Área: %f\n", area2);
    printf("População: %lf\n", populacao2);
    printf("Pontos turísticos: %d\n\n", numerodePontosTuristicos2);

    return 0;
}