#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("Desafio Super Trunfo!\n");

    int codigodaCidade, numerodePontosTuristicos;
    float PIB, area;
    double populacao;
    char nome[50];

    printf("Qual é o nome da cidade?: \n");
    scanf("%s", &nome);

printf("Defina o código da cidade: \n");
scanf("%d", &codigodaCidade);

printf("Digite o PIB: \n");
scanf("%f", &PIB);

printf("Qual é a área total da cidade?: \n");
scanf("%f", &area);

printf("Qual a estimativa do total população?: \n");
scanf("%e", &populacao);

printf("Há quantos pontos turísticos na cidade?: \n");
scanf("%d", &numerodePontosTuristicos);

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
