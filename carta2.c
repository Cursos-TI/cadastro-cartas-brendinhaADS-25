#include <stdio.h> 

   int main() { 
   
    printf(" Carta 2- JOGO SUPER TRUNFO\n "); 

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





return 0; 
   }