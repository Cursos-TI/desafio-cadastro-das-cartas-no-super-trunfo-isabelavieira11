#include <stdio.h>

int main() {
    printf("Desafio de Cartas Super Trunfo - Países\n");
    char estado1[1], estado2[1]; 
    char codigo1[3], codigo2[3];
    char nomecidade1[50], nomecidade2[50];
    float areakm1, areakm2;
    float PIB1, PIB2;
    int populacao1, populacao2; 
    int ptsturisticos1, ptsturisticos2; 

    printf("O jogo Super Trunfo começa agora! Insira os dados das cartas\n\n"); 

    //Dados da Carta 1 que serão digitados pelo usuário 
    printf("Carta 1\n");

    printf("Represente o nome do estado 1 com uma letra de A até H:\n");
    scanf("%s", estado1);

    printf("Digite o código da carta de 01 a 04 - Exemplo: A01, B03...\n");
    scanf("%s", codigo1); 

    printf("Digite o nome da cidade 1: \n"); 
    scanf("%s", nomecidade1); 

    printf("Digite a área em KM quadrados da cidade 1: \n");
    scanf("%f", &areakm1); 

    printf("Digite o PIB da cidade 1: \n"); 
    scanf("%f", &PIB1);

    printf("Digite o número da população da cidade 1: \n"); 
    scanf("%d", &populacao1);

    printf("Digite o número de pontos turísticos da cidade 1: \n");
    scanf("%d", &ptsturisticos1);
    //fim da entrada de dados da carta 1

    //Dados que serão exibidos na tela após preenchimento do usuário da carta 1
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomecidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km² \n", areakm1);
    printf("PIB: %f bilhões de reais \n", PIB1);
    printf("Número de pontos turísticos: %d \n", ptsturisticos1);
    //fim da exibição dos dados da carta 1

    //Dados da carta 2 que serão digitados pelo usuário
    
    printf("Carta 2:\n"); 

    printf("Represente o nome do estado 2 com uma letra de A até H:\n");
    scanf("%s", estado2);

    printf("Digite o código da carta de 01 até 04 - Exemplo: A01, B03...\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade 2: \n");
    scanf("%s", nomecidade2); 

    printf("Digite a área em KM quadrados da cidade 2: \n");
    scanf("%f", &areakm2); 

    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &PIB2); 

    printf("Digite o número da população da cidade 2:\n"); 
    scanf("%d", &populacao2); 

    printf("Digite o número de pontos turísticos da cidade 2:\n"); 
    scanf("%d", &ptsturisticos2);
    
    //fim da entrada de dados da carta 2 

    
    //Dados que serão exibidos na tela após preenchimento do usuário 
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomecidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km² \n", areakm2);
    printf("PIB: %f bilhões de reais \n", PIB2);
    printf("Número de pontos turísticos: %d \n", ptsturisticos2);
    //fim da exibição dos dados da carta 2 



    return 0;
}
