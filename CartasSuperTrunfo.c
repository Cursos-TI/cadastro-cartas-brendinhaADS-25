#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() { 
     printf("JOGO SUPER TRUNFO!\n");
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado;
    int pessoas, pontos;
    char cidade [20] ; 
    float pib;
    float area;
    char codigo [20];

  // Área para entrada de dados
    printf("Uma letra de 'A' a 'H' (representando um dos oito estados):\n");
    scanf("%c", &estado);

    printf("Digiteo código da sua carta(EX:A01...):\n");
    scanf("%c", &codigo);

    printf("Digite o nome da cidade escolhida:\n");
    scanf("%c", &cidade);

    printf("Área(km):\n"); 
    scanf("%f", &area);

    printf("PIB(Produto Interno Bruto):\n");
    scanf("%f", &pib);

     printf("População:\n"); 
     scanf("%d", &pessoas);

    printf("Nº de pontos turísticos:\n");
    scanf("%d", &pontos);

  // Área para exibição dos dados da cidade
    printf("O estado é:%s\n", estado);
    printf("O Código da carta é:%s\n", codigo);
    printf("A Cidade é:%s\n", cidade);
    printf("A Áreaé de:%f\n");
    printf("A população é de:%d\n");
    printf("O nº de pontos turísticos são:%d\n");
return 0;
} 
