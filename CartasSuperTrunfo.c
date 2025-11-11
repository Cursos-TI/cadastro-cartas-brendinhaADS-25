#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() { 
     printf("Jogo Super Trunfo");
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado, codigo;
    int pessoas, pontos;
    char cidade [20] ; 
    float pib;
    float area;
    

  // Área para entrada de dados
    printf("Digite o estado:\n");
    scanf("%s", &estado);

    printf("Digiteo código da sua carta: EX:A01...\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade escolhida:\n");
    scanf("%s", &cidade);

    printf("População:\n");
    scanf("%d", &pessoas);

    printf("Área(km):\n");
    scanf("%f", &area);

    printf("PIB(Produto Interno Bruto):\n");
    scanf("%f", &pib);

    printf("Nº de pontos turísticos:");
    scanf("%d", &pontos);
  // Área para exibição dos dados da cidade

return 0;
} 
