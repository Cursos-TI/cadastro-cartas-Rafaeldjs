#include <stdio.h>

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
    char nome_cidade[30];
    int  pontos_turisticos;
    int populacao;
    float area, pib, densidade, pibpercapita, superPoder, resultado;
    
    
  // Área para entrada de dados
    printf("Carta 01\n");//mostra a primeira carta

    printf("Digite o nome da cidade:\n");//o nome da cidade
    scanf(" %s" , nome_cidade);

    printf("Qual a quantidade de habitantes da cidade? \n");//quantidade de habitantes
    scanf("%d", &populacao);

    printf("Qual a área da cidade em quilômetros quadrados?\n");//ara da cidade em km
    scanf("%f", &area);

    printf("Qual o PIB da cidade?\n");// o PIB
    scanf("%f", &pib);

    printf("Qual a quantidade de pontos turísticos na cidade?\n");//os pontos turisticos
    scanf("%d", &pontos_turisticos);

    densidade = (float) populacao / area;
    pibpercapita = (float) pib / populacao;
    superPoder = area +  pontos_turisticos + populacao + pib + pibpercapita + 1/densidade;



  // Área para exibição dos dados da cidade
    printf("\nCarta 01\n");
    printf("\nNome da cidade:%s\n", nome_cidade);
    printf("População:%d\n", populacao);
    printf("Área:%.2fkm²\n", area);
    printf("PIB:%.2f\n", pib);
    printf("Número de Pontos Turísticos:%d\n", pontos_turisticos);
    printf("Densidade Populacional:%f\n", densidade);
    printf("PIB per Capita:%f\n", pibpercapita);
    printf("superPoder: %f\n", superPoder);

    char nome_cidade2[30];
    int  pontos_turisticos2;
    int populacao2;
    float area2, pib2, densidade2, pibpercapita2, superPoder2, resultado2;


    printf("\nCarta 02\n");//mostra a segunda carta

    printf("Digite o nome da cidade:\n");//o nome da cidade
    scanf(" %s" , nome_cidade2);

    printf("Qual a quantidade de habitantes da cidade? \n");//quantidade de habitantes
    scanf("%d", &populacao2);

    printf("Qual a área da cidade em quilômetros quadrados?\n");//ara da cidade em km
    scanf("%f", &area2);

    printf("Qual o PIB da cidade?\n");// o PIB
    scanf("%f", &pib2);

    printf("Qual a quantidade de pontos turísticos na cidade?\n");//os pontos turisticos
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float) populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;
    superPoder2 = area2 +  pontos_turisticos2 + populacao2 + pib2 + pibpercapita2 + 1/densidade2;

  // Área para exibição dos dados da cidade
    printf("\nCarta 02\n");
    printf("\nNome da cidade:%s\n", nome_cidade2);
    printf("População:%d\n", populacao2);
    printf("Área:%.2fkm²\n", area2);
    printf("PIB:%.2f\n", pib2);
    printf("Número de Pontos Turísticos:%d\n", pontos_turisticos2);
    printf ("Densidade Populacional:%f\n", densidade2);
    printf ("PIB per Capita:%f\n", pibpercapita2);
    printf("superPoder: %f\n", superPoder2);

    // Comparação 0 ou 1
    printf("\nResultados (1 = Carta 1 venceu, 0 = Carta 2 venceu)\n");

    printf("População: %d\n", populacao > populacao2);
    printf("Área: %d\n", area > area2);
    printf("PIB: %d\n", pib > pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos > pontos_turisticos2);
    printf("Densidade Populacional: %d\n", densidade > densidade2);
    printf("PIB per Capita: %d\n", pibpercapita > pibpercapita2);
    printf("Super Poder: %d\n", superPoder > superPoder2);



return 0;
} 
