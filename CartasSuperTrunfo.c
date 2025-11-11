#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() { 
     printf("JOGO SUPER TRUNFO!\n");
     printf("Carta 1");
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    int pessoas, pontos;
    char cidade [10] ; 
    float pib;
    float area;
    char codigo [10];

  // Área para entrada de dados
    printf("Uma letra de 'A', 'B', 'C' (representando um estado):\n");
    scanf(" %c", &estado);

    printf("Digiteo código da sua carta(EX:A01...):\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade escolhida:\n");
    scanf("%s", cidade);

    printf("Área(km²):\n"); 
    scanf("%f", &area);

    printf("PIB(Produto Interno Bruto):\n");
    scanf("%f", &pib);

     printf("População:\n"); 
     scanf("%d", &pessoas);

    printf("Nº de pontos turísticos:\n");
    scanf("%d", &pontos);

  // Área para exibição dos dados da cidade
    printf("\n DADOS DA CARTA 1\n");
    printf("Estado: %c\n", estado);
    printf("O Código da carta é: %s\n", codigo);
    printf("A Cidade é: %s\n", cidade);
    printf("A Área é: %.3f\n", area);
    printf("o PIB é de: %.3f\n", pib);
    printf("A população é de: %d\n", pessoas);
    printf("O nº de pontos turísticos são :%d\n", pontos);

return 0;
} 
