#include <stdio.h> 

  int main () { 
    
    printf("CARTA 2 - JOGO SUPER TRUNFO\n "); 
    
    char Estado; 
    float Area, Pib, Pessoas;  
    int Ponto; 
    char Cidade [10]; 
    char Codigo [10]; 
    
    printf("Uma letra de 'A', 'B', 'C' (representando um estado):\n "); 
    scanf(" %c", &Estado); 

    printf("O código da sua carta(EX:A01...)\n "); 
    scanf(" %s", Codigo); 

    printf("Nome da cidade:\n "); 
    scanf(" %s", Cidade); 
    
    printf("Área(km²):\n "); 
    scanf("%f", Area); 

    printf("População:\n "); 
    scanf("%f", Pessoas); 

    printf("PIB(Produto Interno Bruto):\n "); 
    scanf("%f", Pib); 

    printf("Pontos turísticos:\n "); 
    scanf("%d", Ponto); 

    return 0; 

  }