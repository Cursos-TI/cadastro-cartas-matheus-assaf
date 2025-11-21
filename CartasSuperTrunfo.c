#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

 char estado1, estado2
 char,codigo1[6],codigo2[6],cidade1[20],cidade2[20]; // Variaveis do tipo char 
 int populacao1,populacao2,p_turistico1,p_turistico2; // variaveis do tipo inteiro
 float area1,area2,pib1,pib2; // variveis do tipo float

  // Área para entrada de dados

    printf("insira as informacoes da carta 1 a seguir: \n\n"); // informações da carta 1 inserida pelo usuario

    printf("Digite a letra do estado, podendo ser de 'A ate H': \n");
    scanf("%s",&estado1);

    printf("Digite a letra do estado anteriomente mais um numero de '01 a 04': \n");
    scanf("%s",&codigo1);

    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(cidade1,20,stdin); //scanf("%s",&cidade1);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d",&populacao1);

    printf("Digite a area da cidade em quilometros quadrado: \n");
    scanf("%f",&area1);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f",&pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d",&p_turistico1);

    printf("insira as informacoes da carta 2 a seguir: \n\n"); // informações da carta 2 inserida pelo usuario

    printf("Digite a letra do estado: \n");
    scanf("%s",&estado2);

    printf("Digite a letra do estado mais um numero de 01 a 04: \n");
    scanf("%s",&codigo2);

    printf("Digite o nome da cidade: \n");
    getchar();
    fgets(cidade2,20,stdin);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d",&populacao2);

    printf("Digite a area da cidade em quilometros quadrado: \n");
    scanf("%f",&area2);

    printf("Digite o produto interno bruto da cidade: \n");
    scanf("%f",&pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d",&p_turistico2);

  // Área para exibição dos dados da cidade

    printf("Carta 1: \n");  // saida da carta 1 inserida pelo usuario
    printf("Estado: %s\n",estado1);
    printf("Codigo: %s\n",codigo1);
    printf("Nome da Cidade: %s",cidade1);
    printf("Populacao: %d\n",populacao1);
    printf("Area: %.2f km2 \n",area1);
    printf("PIB: %.2f bilhoes de reais \n",pib1);
    printf("Numero de Pontos Turisticos: %d \n\n",p_turistico1);

    printf("Carta 2: \n"); // saida da carta 2 inserida pelo usuario
    printf("Estado: %s\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Nome da Cidade: %s",cidade2);
    printf("Populacao: %d\n",populacao2);
    printf("area: %2.f km2 \n",area2);
    printf("PIB: %2.f bilhoes de reais \n",pib2);
    printf("Numero de Pontos Turisticos: %d\n",p_turistico2);

return 0;
} 
