/* Neste primeiro nível o Objetivo é construir a base do nosso jogo 
Super Trunfo de Países: um sistema para cadastrar as cartas com informações sobre as cidades. */

// Importações
#include <stdio.h>
// inicio da função
int main(){

    // variaveis carta 1
    char estado1[20]; // Nome do Estado em char para aceitar strigs
    char codigo1[3];  // código da carta também char
    char cidade1[20]; // Nome da cidade em char
    int populacao1;   // População em int por swe tratar de um valor inteiro
    float area1;      // Aréa em Km² no, em float por se tratar de um ponto flutuante
    float pib1;       // PIB Valor em reais, também em float
    int turisticos1;  // Número de Pontos turísticos
    float densidade_pop1; // Densidade populacional
    float pib_percapita1; // Pib per capita
    
    // variaveis Carta 2
    char estado2[20]; // Nome do Estado em char para aceitar strigs
    char codigo2[3];  // código da carta também char
    char cidade2[20]; // Nome da cidade em char 
    int populacao2;   // População em int por swe tratar de um valor inteiro
    float area2;      // Aréa em Km² no, em float por se tratar de um ponto flutuante  
    float pib2;       // PIB Valor em reais, também em float
    int turisticos2;  // Número de Pontos turísticos
    float densidade_pop2; // Densidade populacional
    float pib_percapita2; // Pib per capita

// Preenchimento dos dados da primeira carta

    printf("Cadastro da Carta 1\n");

    // solicitar nome do estado
    printf("Digite o nome do Estado: \n");
    scanf("%s", estado1);

    // solicitar código da carta
    printf("Dgite o código da carta: \n");
    scanf("%s", codigo1);

    // solicitar nome da cidade
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade1);

    // solicitar contigente populacional da cidade
    printf("Digite o contigente populacional da cidade: \n");
    scanf("%d", &populacao1);

    //solicitar área em km²
    printf("Digite o tamanho da cidade em Km²: \n");
    scanf("%f", &area1);

    // solicitar pib da cidade em reais
    printf("Digite o valor do PIB da cidade em reais: \n");
    scanf("%f", &pib1);

    // solicitar quantidade de pontos turisticos
    printf("Digite a quantidade de pontos turíticos que a cidade possui: \n");
    scanf("%d", &turisticos1);

    // calculos para densidade Populacional e PIB per Capita da Carta 1

    densidade_pop1 =  populacao1 / area1;
    pib_percapita1 = pib1 / populacao1;

    // Exibir dados da primeiora carta
    
    printf("\nCarta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f Km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);


    // Preenchimento dos dados da primeira carta

    printf("\nCadastro da Carta 2\n");

    // solicitar nome do estado
    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);

    // solicitar código da carta
    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);

    // solicitar nome da cidade
    printf("Digite o Nome da Cidade: \n");
    scanf("%s", cidade2);

    // solicitar contigente populacional da cidade
    printf("Digite o contigente populacional da cidade: \n");
    scanf("%d", &populacao2);

    //solicitar área em km²
    printf("Digite o tamanho da cidade em Km²: \n");
    scanf("%f", &area2);

    // solicitar pib da cidade em reais
    printf("Digite o valor do PIB da cidade em reais: \n");
    scanf("%f", &pib2);

    // solicitar quantidade de pontos turisticos
    printf("Digite a quantidade de pontos turíticos que a cidade possui: \n");
    scanf("%d", &turisticos2);

    // calculos para densidade Populacional e PIB per Capita da Carta 1

    densidade_pop2 =  populacao2 / area2;
    pib_percapita2 = pib2 / populacao2;

    // Exibir dados da segunda carta
    printf("\nCarta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3f Km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);

    return 0;

}