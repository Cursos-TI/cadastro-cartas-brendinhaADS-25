#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() { 
     printf("JOGO SUPER TRUNFO!\n");
     printf("Carta 1");
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado = 'G'; 
    float pessoas = 400.000;
    char cidade [10] = "anapolis"; 
    float pib = 100.000;
    float area = 400.000;
    char codigo [10] = "G01"; 
    int pontos; 

  // Área para entrada de dados
    printf("Uma letra de 'A', 'B', 'C' (representando um estado):\n");
    scanf(" %c", &estado);

    printf("Digiteo código da sua carta(EX:A01...):\n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade escolhida:\n");
    scanf(" %s", cidade);

    printf("Área(km²):\n"); 
    scanf("%f", &area);

    printf("PIB(Produto Interno Bruto):\n");
    scanf("%f", &pib);

    printf("População:\n"); 
    scanf("%f", &pessoas);

    printf("Pontos turísticos:\n "); 
    scanf(" %d", &pontos); 

  // Área para exibição dos dados da cidade
    printf("\n DADOS DA CARTA 1\n");

    printf("Estado: %c\n ", estado); 
    printf("Código: %s\n ", codigo); 
    printf("A Cidade é: %s\n ", cidade); 
    printf("A Área é: %.3f\n ", area); 
    printf("o PIB é de: %.3f\n ", pib); 
    printf("A população é de: %.3f\n ", pessoas); 
    printf("Pontos turísticos: %d\n ", pontos); 


    printf("\n Carta 2- JOGO SUPER TRUNFO\n "); 

    char Estado; 
    char Codigo [10]; 
    int Pontos; 
    float Area, Pib, Pessoas; 
    char Cidade [10];  

    printf("Uma letra de 'A', 'B', 'C' (representando um estado):\n "); 
    scanf(" %c", &Estado); 

    printf("Digiteo código da sua carta(EX:A01...):\n "); 
    scanf(" %s", Codigo); 

    printf("Digite o nome da cidade escolhida:\n "); 
    scanf(" %s", Cidade); 

    printf("Área(km²):\n "); 
    scanf("%f", &Area); 

    printf("PIB(Produto Interno Bruto):\n"); 
    scanf("%f", &Pib); 

    printf("População:\n "); 
    scanf("%f", &Pessoas); 

    printf("Pontos turísticos:\n "); 
    scanf(" %d", &Pontos); 

    printf("Estado: %c\n ", Estado); 
    printf("Código da carta: %s\n ", Codigo); 
    printf("Cidade: %s\n ", Cidade); 
    printf("Área: %.3f\n ", Area); 
    printf("Pib: %.3f\n ", Pib); 
    printf("População: %.3f\n ", Pessoas); 
    printf("Pontos turísticos: %d\n ", Pontos); 


return 0;
} 
