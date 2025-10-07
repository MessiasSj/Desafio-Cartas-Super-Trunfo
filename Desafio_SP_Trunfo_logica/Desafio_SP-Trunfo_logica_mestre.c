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

    int opcao1, opcao2;
    float soma1, soma2;

// Preenchimento dos dados da primeira carta
    printf("*** Vamos iniciar o Jogo***\n");

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

    printf("\nEscolha o primeiro atributo que você deseja comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turítiscos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &opcao1);

    printf("\nEscolha o segundo atributo que você deseja comparar\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turítiscos\n");
    printf("5. Densidade demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    scanf("%d", &opcao2);


    // Validação se as opções são iguais
if (opcao1 == opcao2) {
    printf("Erro: As duas opções não podem ser iguais! Escolha atributos diferentes.\n");
    return 1;
}
    // executar comparação de cartas
switch (opcao1) {
    case 1: // População
        if (opcao2 == 2) {
            printf("Comparando População e Área:\n");
            soma1 = populacao1 + area1;
            soma2 = populacao2 + area2;
            printf("População Carta 1: %lu, Área Carta 1: %.3f\n", populacao1, area1);
            printf("População Carta 2: %lu, Área Carta 2: %.3f\n", populacao2, area2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 3) {
            printf("Comparando População e PIB:\n");
            soma1 = populacao1 + pib1;
            soma2 = populacao2 + pib2;
            printf("População Carta 1: %lu, PIB Carta 1: %.2f\n", populacao1, pib1);
            printf("População Carta 2: %lu, PIB Carta 2: %.2f\n", populacao2, pib2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 4) {
            printf("Comparando População e Pontos Turísticos:\n");
            soma1 = populacao1 + turisticos1;
            soma2 = populacao2 + turisticos2;
            printf("População Carta 1: %lu, Pontos Turísticos Carta 1: %d\n", populacao1, turisticos1);
            printf("População Carta 2: %lu, Pontos Turísticos Carta 2: %d\n", populacao2, turisticos2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 5) {
            printf("Comparando População e Densidade:\n");
            soma1 = populacao1 + (1.0f / densidade_pop1);
            soma2 = populacao2 + (1.0f / densidade_pop2);
            printf("População Carta 1: %lu, Densidade Carta 1: %.2f\n", populacao1, densidade_pop1);
            printf("População Carta 2: %lu, Densidade Carta 2: %.2f\n", populacao2, densidade_pop2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 6) {
            printf("Comparando População e PIB per Capita:\n");
            soma1 = populacao1 + pib_percapita1;
            soma2 = populacao2 + pib_percapita2;
            printf("População Carta 1: %lu, PIB per Capita Carta 1: %.2f\n", populacao1, pib_percapita1);
            printf("População Carta 2: %lu, PIB per Capita Carta 2: %.2f\n", populacao2, pib_percapita2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 7) {
            printf("Comparando População e Super Poder:\n");
            soma1 = populacao1 + SuperPoder1;
            soma2 = populacao2 + SuperPoder2;
            printf("População Carta 1: %lu, Super Poder Carta 1: %.2f\n", populacao1, SuperPoder1);
            printf("População Carta 2: %lu, Super Poder Carta 2: %.2f\n", populacao2, SuperPoder2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else {
            printf("Opção 2 inválida! Digite um número entre 2 e 7.\n");
        }
        break;

    case 2: // Área
        if (opcao2 == 1) {
            printf("Comparando Área e População:\n");
            soma1 = area1 + populacao1;
            soma2 = area2 + populacao2;
            printf("Área Carta 1: %.3f, População Carta 1: %lu\n", area1, populacao1);
            printf("Área Carta 2: %.3f, População Carta 2: %lu\n", area2, populacao2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 3) {
            printf("Comparando Área e PIB:\n");
            soma1 = area1 + pib1;
            soma2 = area2 + pib2;
            printf("Área Carta 1: %.3f, PIB Carta 1: %.2f\n", area1, pib1);
            printf("Área Carta 2: %.3f, PIB Carta 2: %.2f\n", area2, pib2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 4) {
            printf("Comparando Área e Pontos Turísticos:\n");
            soma1 = area1 + turisticos1;
            soma2 = area2 + turisticos2;
            printf("Área Carta 1: %.3f, Pontos Turísticos Carta 1: %d\n", area1, turisticos1);
            printf("Área Carta 2: %.3f, Pontos Turísticos Carta 2: %d\n", area2, turisticos2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 5) {
            printf("Comparando Área e Densidade:\n");
            soma1 = area1 + (1.0f / densidade_pop1);
            soma2 = area2 + (1.0f / densidade_pop2);
            printf("Área Carta 1: %.3f, Densidade Carta 1: %.2f\n", area1, densidade_pop1);
            printf("Área Carta 2: %.3f, Densidade Carta 2: %.2f\n", area2, densidade_pop2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 6) {
            printf("Comparando Área e PIB per Capita:\n");
            soma1 = area1 + pib_percapita1;
            soma2 = area2 + pib_percapita2;
            printf("Área Carta 1: %.3f, PIB per Capita Carta 1: %.2f\n", area1, pib_percapita1);
            printf("Área Carta 2: %.3f, PIB per Capita Carta 2: %.2f\n", area2, pib_percapita2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 7) {
            printf("Comparando Área e Super Poder:\n");
            soma1 = area1 + SuperPoder1;
            soma2 = area2 + SuperPoder2;
            printf("Área Carta 1: %.3f, Super Poder Carta 1: %.2f\n", area1, SuperPoder1);
            printf("Área Carta 2: %.3f, Super Poder Carta 2: %.2f\n", area2, SuperPoder2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else {
            printf("Opção 2 inválida! Digite um número entre 1 e 7 (exceto 2).\n");
        }
        break;

    case 3: // PIB
        if (opcao2 == 1) {
            printf("Comparando PIB e População:\n");
            soma1 = pib1 + populacao1;
            soma2 = pib2 + populacao2;
            printf("PIB Carta 1: %.2f, População Carta 1: %lu\n", pib1, populacao1);
            printf("PIB Carta 2: %.2f, População Carta 2: %lu\n", pib2, populacao2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 2) {
            printf("Comparando PIB e Área:\n");
            soma1 = pib1 + area1;
            soma2 = pib2 + area2;
            printf("PIB Carta 1: %.2f, Área Carta 1: %.3f\n", pib1, area1);
            printf("PIB Carta 2: %.2f, Área Carta 2: %.3f\n", pib2, area2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 4) {
            printf("Comparando PIB e Pontos Turísticos:\n");
            soma1 = pib1 + turisticos1;
            soma2 = pib2 + turisticos2;
            printf("PIB Carta 1: %.2f, Pontos Turísticos Carta 1: %d\n", pib1, turisticos1);
            printf("PIB Carta 2: %.2f, Pontos Turísticos Carta 2: %d\n", pib2, turisticos2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 5) {
            printf("Comparando PIB e Densidade:\n");
            soma1 = pib1 + (1.0f / densidade_pop1);
            soma2 = pib2 + (1.0f / densidade_pop2);
            printf("PIB Carta 1: %.2f, Densidade Carta 1: %.2f\n", pib1, densidade_pop1);
            printf("PIB Carta 2: %.2f, Densidade Carta 2: %.2f\n", pib2, densidade_pop2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 6) {
            printf("Comparando PIB e PIB per Capita:\n");
            soma1 = pib1 + pib_percapita1;
            soma2 = pib2 + pib_percapita2;
            printf("PIB Carta 1: %.2f, PIB per Capita Carta 1: %.2f\n", pib1, pib_percapita1);
            printf("PIB Carta 2: %.2f, PIB per Capita Carta 2: %.2f\n", pib2, pib_percapita2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 7) {
            printf("Comparando PIB e Super Poder:\n");
            soma1 = pib1 + SuperPoder1;
            soma2 = pib2 + SuperPoder2;
            printf("PIB Carta 1: %.2f, Super Poder Carta 1: %.2f\n", pib1, SuperPoder1);
            printf("PIB Carta 2: %.2f, Super Poder Carta 2: %.2f\n", pib2, SuperPoder2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else {
            printf("Opção 2 inválida! Digite um número entre 1 e 7 (exceto 3).\n");
        }
        break;

    case 4: // Pontos Turísticos
        if (opcao2 == 1) {
            printf("Comparando Pontos Turísticos e População:\n");
            soma1 = turisticos1 + populacao1;
            soma2 = turisticos2 + populacao2;
            printf("Pontos Turísticos Carta 1: %d, População Carta 1: %lu\n", turisticos1, populacao1);
            printf("Pontos Turísticos Carta 2: %d, População Carta 2: %lu\n", turisticos2, populacao2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 2) {
            printf("Comparando Pontos Turísticos e Área:\n");
            soma1 = turisticos1 + area1;
            soma2 = turisticos2 + area2;
            printf("Pontos Turísticos Carta 1: %d, Área Carta 1: %.3f\n", turisticos1, area1);
            printf("Pontos Turísticos Carta 2: %d, Área Carta 2: %.3f\n", turisticos2, area2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 3) {
            printf("Comparando Pontos Turísticos e PIB:\n");
            soma1 = turisticos1 + pib1;
            soma2 = turisticos2 + pib2;
            printf("Pontos Turísticos Carta 1: %d, PIB Carta 1: %.2f\n", turisticos1, pib1);
            printf("Pontos Turísticos Carta 2: %d, PIB Carta 2: %.2f\n", turisticos2, pib2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 5) {
            printf("Comparando Pontos Turísticos e Densidade:\n");
            soma1 = turisticos1 + (1.0f / densidade_pop1);
            soma2 = turisticos2 + (1.0f / densidade_pop2);
            printf("Pontos Turísticos Carta 1: %d, Densidade Carta 1: %.2f\n", turisticos1, densidade_pop1);
            printf("Pontos Turísticos Carta 2: %d, Densidade Carta 2: %.2f\n", turisticos2, densidade_pop2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 6) {
            printf("Comparando Pontos Turísticos e PIB per Capita:\n");
            soma1 = turisticos1 + pib_percapita1;
            soma2 = turisticos2 + pib_percapita2;
            printf("Pontos Turísticos Carta 1: %d, PIB per Capita Carta 1: %.2f\n", turisticos1, pib_percapita1);
            printf("Pontos Turísticos Carta 2: %d, PIB per Capita Carta 2: %.2f\n", turisticos2, pib_percapita2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 7) {
            printf("Comparando Pontos Turísticos e Super Poder:\n");
            soma1 = turisticos1 + SuperPoder1;
            soma2 = turisticos2 + SuperPoder2;
            printf("Pontos Turísticos Carta 1: %d, Super Poder Carta 1: %.2f\n", turisticos1, SuperPoder1);
            printf("Pontos Turísticos Carta 2: %d, Super Poder Carta 2: %.2f\n", turisticos2, SuperPoder2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else {
            printf("Opção 2 inválida! Digite um número entre 1 e 7 (exceto 4).\n");
        }
        break;

    case 5: // Densidade
        if (opcao2 == 1) {
            printf("Comparando Densidade e População:\n");
            soma1 = (1.0f / densidade_pop1) + populacao1;
            soma2 = (1.0f / densidade_pop2) + populacao2;
            printf("Densidade Carta 1: %.2f, População Carta 1: %lu\n", densidade_pop1, populacao1);
            printf("Densidade Carta 2: %.2f, População Carta 2: %lu\n", densidade_pop2, populacao2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 2) {
            printf("Comparando Densidade e Área:\n");
            soma1 = (1.0f / densidade_pop1) + area1;
            soma2 = (1.0f / densidade_pop2) + area2;
            printf("Densidade Carta 1: %.2f, Área Carta 1: %.3f\n", densidade_pop1, area1);
            printf("Densidade Carta 2: %.2f, Área Carta 2: %.3f\n", densidade_pop2, area2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 3) {
            printf("Comparando Densidade e PIB:\n");
            soma1 = (1.0f / densidade_pop1) + pib1;
            soma2 = (1.0f / densidade_pop2) + pib2;
            printf("Densidade Carta 1: %.2f, PIB Carta 1: %.2f\n", densidade_pop1, pib1);
            printf("Densidade Carta 2: %.2f, PIB Carta 2: %.2f\n", densidade_pop2, pib2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 4) {
            printf("Comparando Densidade e Pontos Turísticos:\n");
            soma1 = (1.0f / densidade_pop1) + turisticos1;
            soma2 = (1.0f / densidade_pop2) + turisticos2;
            printf("Densidade Carta 1: %.2f, Pontos Turísticos Carta 1: %d\n", densidade_pop1, turisticos1);
            printf("Densidade Carta 2: %.2f, Pontos Turísticos Carta 2: %d\n", densidade_pop2, turisticos2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 6) {
            printf("Comparando Densidade e PIB per Capita:\n");
            soma1 = (1.0f / densidade_pop1) + pib_percapita1;
            soma2 = (1.0f / densidade_pop2) + pib_percapita2;
            printf("Densidade Carta 1: %.2f, PIB per Capita Carta 1: %.2f\n", densidade_pop1, pib_percapita1);
            printf("Densidade Carta 2: %.2f, PIB per Capita Carta 2: %.2f\n", densidade_pop2, pib_percapita2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 7) {
            printf("Comparando Densidade e Super Poder:\n");
            soma1 = (1.0f / densidade_pop1) + SuperPoder1;
            soma2 = (1.0f / densidade_pop2) + SuperPoder2;
            printf("Densidade Carta 1: %.2f, Super Poder Carta 1: %.2f\n", densidade_pop1, SuperPoder1);
            printf("Densidade Carta 2: %.2f, Super Poder Carta 2: %.2f\n", densidade_pop2, SuperPoder2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else {
            printf("Opção 2 inválida! Digite um número entre 1 e 7 (exceto 5).\n");
        }
        break;

    case 6: // PIB per Capita
        if (opcao2 == 1) {
            printf("Comparando PIB per Capita e População:\n");
            soma1 = pib_percapita1 + populacao1;
            soma2 = pib_percapita2 + populacao2;
            printf("PIB per Capita Carta 1: %.2f, População Carta 1: %lu\n", pib_percapita1, populacao1);
            printf("PIB per Capita Carta 2: %.2f, População Carta 2: %lu\n", pib_percapita2, populacao2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 2) {
            printf("Comparando PIB per Capita e Área:\n");
            soma1 = pib_percapita1 + area1;
            soma2 = pib_percapita2 + area2;
            printf("PIB per Capita Carta 1: %.2f, Área Carta 1: %.3f\n", pib_percapita1, area1);
            printf("PIB per Capita Carta 2: %.2f, Área Carta 2: %.3f\n", pib_percapita2, area2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 3) {
            printf("Comparando PIB per Capita e PIB:\n");
            soma1 = pib_percapita1 + pib1;
            soma2 = pib_percapita2 + pib2;
            printf("PIB per Capita Carta 1: %.2f, PIB Carta 1: %.2f\n", pib_percapita1, pib1);
            printf("PIB per Capita Carta 2: %.2f, PIB Carta 2: %.2f\n", pib_percapita2, pib2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 4) {
            printf("Comparando PIB per Capita e Pontos Turísticos:\n");
            soma1 = pib_percapita1 + turisticos1;
            soma2 = pib_percapita2 + turisticos2;
            printf("PIB per Capita Carta 1: %.2f, Pontos Turísticos Carta 1: %d\n", pib_percapita1, turisticos1);
            printf("PIB per Capita Carta 2: %.2f, Pontos Turísticos Carta 2: %d\n", pib_percapita2, turisticos2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 5) {
            printf("Comparando PIB per Capita e Densidade:\n");
            soma1 = pib_percapita1 + (1.0f / densidade_pop1);
            soma2 = pib_percapita2 + (1.0f / densidade_pop2);
            printf("PIB per Capita Carta 1: %.2f, Densidade Carta 1: %.2f\n", pib_percapita1, densidade_pop1);
            printf("PIB per Capita Carta 2: %.2f, Densidade Carta 2: %.2f\n", pib_percapita2, densidade_pop2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 7) {
            printf("Comparando PIB per Capita e Super Poder:\n");
            soma1 = pib_percapita1 + SuperPoder1;
            soma2 = pib_percapita2 + SuperPoder2;
            printf("PIB per Capita Carta 1: %.2f, Super Poder Carta 1: %.2f\n", pib_percapita1, SuperPoder1);
            printf("PIB per Capita Carta 2: %.2f, Super Poder Carta 2: %.2f\n", pib_percapita2, SuperPoder2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else {
            printf("Opção 2 inválida! Digite um número entre 1 e 7 (exceto 6).\n");
        }
        break;

    case 7: // Super Poder
        if (opcao2 == 1) {
            printf("Comparando Super Poder e População:\n");
            soma1 = SuperPoder1 + populacao1;
            soma2 = SuperPoder2 + populacao2;
            printf("Super Poder Carta 1: %.2f, População Carta 1: %lu\n", SuperPoder1, populacao1);
            printf("Super Poder Carta 2: %.2f, População Carta 2: %lu\n", SuperPoder2, populacao2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 2) {
            printf("Comparando Super Poder e Área:\n");
            soma1 = SuperPoder1 + area1;
            soma2 = SuperPoder2 + area2;
            printf("Super Poder Carta 1: %.2f, Área Carta 1: %.3f\n", SuperPoder1, area1);
            printf("Super Poder Carta 2: %.2f, Área Carta 2: %.3f\n", SuperPoder2, area2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 3) {
            printf("Comparando Super Poder e PIB:\n");
            soma1 = SuperPoder1 + pib1;
            soma2 = SuperPoder2 + pib2;
            printf("Super Poder Carta 1: %.2f, PIB Carta 1: %.2f\n", SuperPoder1, pib1);
            printf("Super Poder Carta 2: %.2f, PIB Carta 2: %.2f\n", SuperPoder2, pib2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 4) {
            printf("Comparando Super Poder e Pontos Turísticos:\n");
            soma1 = SuperPoder1 + turisticos1;
            soma2 = SuperPoder2 + turisticos2;
            printf("Super Poder Carta 1: %.2f, Pontos Turísticos Carta 1: %d\n", SuperPoder1, turisticos1);
            printf("Super Poder Carta 2: %.2f, Pontos Turísticos Carta 2: %d\n", SuperPoder2, turisticos2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 5) {
            printf("Comparando Super Poder e Densidade:\n");
            soma1 = SuperPoder1 + (1.0f / densidade_pop1);
            soma2 = SuperPoder2 + (1.0f / densidade_pop2);
            printf("Super Poder Carta 1: %.2f, Densidade Carta 1: %.2f\n", SuperPoder1, densidade_pop1);
            printf("Super Poder Carta 2: %.2f, Densidade Carta 2: %.2f\n", SuperPoder2, densidade_pop2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else if (opcao2 == 6) {
            printf("Comparando Super Poder e PIB per Capita:\n");
            soma1 = SuperPoder1 + pib_percapita1;
            soma2 = SuperPoder2 + pib_percapita2;
            printf("Super Poder Carta 1: %.2f, PIB per Capita Carta 1: %.2f\n", SuperPoder1, pib_percapita1);
            printf("Super Poder Carta 2: %.2f, PIB per Capita Carta 2: %.2f\n", SuperPoder2, pib_percapita2);
            (soma1 > soma2) ? printf("Carta 1 venceu!\n") : (soma1 < soma2) ? printf("Carta 2 venceu!\n") : printf("Empate!\n");
        }
        else {
            printf("Opção 2 inválida! Digite um número entre 1 e 7 (exceto 7).\n");
        }
        break;

    default:
        printf("Opção 1 inválida! Digite um número entre 1 e 7.\n");
        break;
}       

printf("Encerrado o jogo\n");

return 0;

}