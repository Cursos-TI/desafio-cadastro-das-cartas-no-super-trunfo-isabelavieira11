#include <stdio.h>

int main() {
    printf("Desafio de Cartas Super Trunfo - Países\n");
  char estado1[3], estado2[3]; 
  char codigo1[50], codigo2[50];
  char nomecidade1[50], nomecidade2[50];
  float areakm1, areakm2;
  float PIB1, PIB2;
  int populacao1, populacao2; 
  int ptsturisticos1, ptsturisticos2; 

  printf("O jogo Super Trunfo começa agora! Insira os dados das cartas\n\n"); 

  //Dados da carta 1
  printf("Carta 1\n");

  printf("Represente o nome do estado 1 com uma letra de A até H:\n");
  scanf("%s", estado1);

  printf("Digite o código da carta de 01 a 04 - Exemplo: A01, B03...\n");
  scanf("%s", &codigo1); 

  printf("Digite o nome da cidade 1: \n"); 
  scanf("%s", &nomecidade1); 

  printf("Digite a área em KM quadrados da cidade 1: \n");
  scanf("%f", &areakm1); 

  printf("Digite o PIB da cidade 1: \n"); 
  scanf("%f", &PIB1);

  printf("Digite o número da população da cidade 1: \n"); 
  scanf("%d", &populacao1);

  printf("Digite o número de pontos turísticos da cidade 1: \n");
  scanf("%d", &ptsturisticos1);

  //dados da carta 2
  
  printf("Carta 2\n"); 

  printf("Represente o nome do estado 2 com uma letra de A até H:\n");
  scanf("%s", estado2);

  printf("Digite o código da carta de 01 até 04 - Exemplo: A01, B03...\n");
  scanf("%s", &codigo2);

  printf("Digite o nome da cidade 2: \n");
  scanf("%s", &nomecidade2); 

  printf("Digite a área em KM quadrados da cidade 2: \n");
  scanf("%f", &areakm2); 

  printf("Digite o PIB da cidade 2:\n");
  scanf("%f", &PIB2); 

  printf("Digite o número da população da cidade 2:\n"); 
  scanf("%d", &populacao2); 

  printf("Digite o número de pontos turísticos da cidade 2:\n"); 
  scanf("%d", &ptsturisticos2); 


    return 0;
}
