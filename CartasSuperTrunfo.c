#include <stdio.h>

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
    char nome_cidade[30];
    int  pontos_turisticos;
    long long int populacao;
    double area, pib;
  // Área para entrada de dados
    printf("Carta 01\n");//mostra a primeira carta

    printf("Digite o nome da cidade:\n");//o nome da cidade
    scanf(" %s" , nome_cidade);

    printf("Qual a quantidade de habitantes da cidade? \n");//quantidade de habitantes
    scanf("%lld", &populacao);

    printf("Qual a área da cidade em quilômetros quadrados?\n");//ara da cidade em km
    scanf("%lf", &area);

    printf("Qual o PIB da cidade?\n");// o PIB
    scanf("%lf", &pib);

    printf("Qual a quantidade de pontos turísticos na cidade?\n");//os pontos turisticos
    scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
    printf("\nCarta 01\n");
    printf("\nNome da cidade:%s\n", nome_cidade);
    printf("População:%lld\n", populacao);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2f\n", pib);
    printf("Número de Pontos Turísticos:%d\n", pontos_turisticos);

    printf("\nCarta 02\n");//mostra a segunda carta

    printf("Digite o nome da cidade:\n");//o nome da cidade
    scanf(" %s" , nome_cidade);

    printf("Qual a quantidade de habitantes da cidade? \n");//quantidade de habitantes
    scanf("%lld", &populacao);

    printf("Qual a área da cidade em quilômetros quadrados?\n");//ara da cidade em km
    scanf("%lf", &area);

    printf("Qual o PIB da cidade?\n");// o PIB
    scanf("%lf", &pib);

    printf("Qual a quantidade de pontos turísticos na cidade?\n");//os pontos turisticos
    scanf("%d", &pontos_turisticos);

  // Área para exibição dos dados da cidade
    printf("\nCarta 02\n");
    printf("\nNome da cidade:%s\n", nome_cidade);
    printf("População:%lld\n", populacao);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2f\n", pib);
    printf("Número de Pontos Turísticos:%d\n", pontos_turisticos);

return 0;
} 
