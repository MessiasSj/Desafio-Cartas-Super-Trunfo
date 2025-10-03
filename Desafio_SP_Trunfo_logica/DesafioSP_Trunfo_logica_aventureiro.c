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
    unsigned long int populacao1;   // População em int por swe tratar de um valor inteiro
    float area1;      // Aréa em Km² no, em float por se tratar de um ponto flutuante
    float pib1;       // PIB Valor em reais, também em float
    int turisticos1;  // Número de Pontos turísticos
    float densidade_pop1; // Densidade populacional
    float pib_percapita1; // Pib per capita
    float SuperPoder1;    // Soma de população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populaciona
    
    // variaveis Carta 2
    char estado2[20]; // Nome do Estado em char para aceitar strigs
    char codigo2[3];  // código da carta também char
    char cidade2[20]; // Nome da cidade em char 
    unsigned long int populacao2;   // População em int por swe tratar de um valor inteiro
    float area2;      // Aréa em Km² no, em float por se tratar de um ponto flutuante  
    float pib2;       // PIB Valor em reais, também em float
    int turisticos2;  // Número de Pontos turísticos
    float densidade_pop2; // Densidade populacional
    float pib_percapita2; // Pib per capita
    float SuperPoder2;    // Soma de população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populaciona

    int opcao;

// Preenchimento dos dados da primeira carta
    printf("*** Vamos iniciar o Jogo***");

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
    scanf("%lu", &populacao1);

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

    // calculando o Super poder da carta 1
    SuperPoder1 = populacao1 + area1 + pib1 + turisticos1 + pib_percapita1 + (1 / densidade_pop1);


    // Exibir dados da primeiora carta
    
    printf("\nCarta 1 \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n",cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.3f Km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);


    // Preenchimento dos dados da segunda carta

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
    scanf("%lu", &populacao2);

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

    // calculando o Super poder da carta 2
    SuperPoder2 = populacao2 + area2 + pib2 + turisticos2 + pib_percapita2 + (1 / densidade_pop2);

    // Exibir dados da segunda carta
    printf("\nCarta 2 \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.3f Km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);

    // exibir menu de escolha de comparação

    printf("\nEscolha o atributo que você deseja comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turítiscos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &opcao);

    // executar comparação de cartas

    switch (opcao)
    {
    case 1:
        printf("Cidade 1: %s - Cidade 2: %s\n", cidade1, cidade2);
        printf("Vamos comparar a População de cada carta\n");
        printf("População da Carta 1: %lu - População Carta 2: %lu\n", populacao1, populacao2);
        if (populacao1 > populacao2){
            printf("A Carta 1 Venceu!\n");
        } else if (populacao1 < populacao2){
            printf("A Carta 2 Venceu!\n");
        } else{   
            printf("Deu empate!\n"); 
        }       
    break;
    case 2:
        printf("Cidade 1: %s - Cidade 2: %s\n", cidade1, cidade2);
        printf("Vamos comparar a Área de cada carta\n");
        printf("Área da Carta 1: %.3f - Área Carta 2: %.3f\n", area1, area2);
        if (area1 > area2){
            printf("A Carta 1 Venceu!\n");
        } else if (area1 < area2){
            printf("A Carta 2 Venceu!\n");
        } else{   
            printf("Deu empate!\n"); 
        }
        break;
    case 3:
        printf("Cidade 1: %s - Cidade 2: %s\n", cidade1, cidade2);
        printf("Vamos comparar a PIB de cada carta\n");
        printf("PIB da Carta 1: %.2f - PIB Carta 2: %.2f\n", pib1, pib2);
        if (pib1 > pib2){
            printf("A Carta 1 Venceu!\n");
        } else if (pib1 < pib2){
            printf("A Carta 2 Venceu!\n");
        } else{   
            printf("Deu empate!\n"); 
        }
        break;
    case 4:
        printf("Cidade 1: %s - Cidade 2: %s\n", cidade1, cidade2);
        printf("Vamos comparar a Número de pontos turísticos de cada carta\n");
        printf("Número de pontos turísticos da Carta 1: %d - Número de pontos turísticos Carta 2: %d\n", turisticos1, turisticos2);
        if (turisticos1 > turisticos2){
            printf("A Carta 1 Venceu!\n");
        } else if (turisticos1 < turisticos2){
            printf("A Carta 2 Venceu!\n");
        } else{   
            printf("Deu empate!\n"); 
        }
        break;
    case 5:
        printf("Cidade 1: %s - Cidade 2: %s\n", cidade1, cidade2);
        printf("Vamos comparar a Densidade demográfica de cada carta\n");
        printf("Densidade demográfica da Carta 1: %.2f - Densidade demográfica Carta 2: %.2f\n", densidade_pop1, densidade_pop2);
        if (densidade_pop1 < densidade_pop2){
            printf("A Carta 1 Venceu!\n");
        } else if (densidade_pop1 > densidade_pop2){
            printf("A Carta 2 Venceu!\n");
        } else{   
            printf("Deu empate!\n"); 
        }
        break;
    case 6:
        printf("Cidade 1: %s - Cidade 2: %s\n", cidade1, cidade2);
        printf("Vamos comparar o PIB per capita de cada carta\n");
        printf("PIB per capita da Carta 1: %.2f - PIB per capita Carta 2: %.2f\n", pib_percapita1, pib_percapita2);
        if (pib_percapita1 > pib_percapita2){
            printf("A Carta 1 Venceu!\n");
        } else if (pib_percapita1 < pib_percapita2){
            printf("A Carta 2 Venceu!\n");
        } else{   
            printf("Deu empate!\n"); 
        }
        break;
    case 7:
        printf("Cidade 1: %s - Cidade 2: %s\n", cidade1, cidade2);
        printf("Vamos comparar o Super Poder de cada carta\n");
        printf("Super Poder da Carta 1: %.2f - Super Poder Carta 2: %.2f\n", SuperPoder1, SuperPoder2);
        if (SuperPoder1 > SuperPoder2){
            printf("A Carta 1 Venceu!\n");
        } else if (SuperPoder1 < SuperPoder2){
            printf("A Carta 2 Venceu!\n");
        } else{   
            printf("Deu empate!\n"); 
        }
        
        break;                       
    default:
        printf("Opção Inválida!\n");
        break;
    }

    

    return 0;    

}