#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    
    char codigo_da_cidade[100], codigo_da_cidade2[100];
    char nome[100], nome2[100];
    int populacao, populacao2;
    int area, area2;
    float pib, pib2;
    int pontos_turisticos, pontos_turisticos2;
    float densidade_populacional, pib_per_capita, densidade_populacional2, pib_per_capita2;

    

    // Cadastro das Cartas:

    printf("Qual o código da cidade? : ");
    scanf("%s", codigo_da_cidade);  

    printf("Qual o nome da cidade? : ");
    scanf("%s", nome);

    printf("Qual a população da cidade? : ");
    scanf("%d", &populacao);

    printf("Qual a área da cidade? : ");
    scanf("%d", &area);

    printf("Qual o PIB da cidade? : ");
    scanf("%f", &pib);

    printf("Qual número de pontos turísticos da cidade? : ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (float)populacao / area;
    pib_per_capita = pib / populacao;

    printf("Qual o código da cidade2? : ");
    scanf("%s", codigo_da_cidade2);  

    printf("Qual o nome da cidade2? : ");
    scanf("%s", nome2);

    printf("Qual a população da cidade2? : ");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade2? : ");
    scanf("%d", &area2);

    printf("Qual o PIB da cidade2? : ");
    scanf("%f", &pib2);

    printf("Qual número de pontos turísticos da cidade2? : ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.

    if (populacao > populacao2) {
    printf("Cidade 1 tem maior população.\n");
    } else {
    printf("Cidade 2 tem maior população.\n");
    }
    if (area > area2) {
    printf("Cidade 1 tem maior area.\n");
    } 
        else {
    printf("Cidade 2 tem maior area.\n");
    }
    if (pib > pib2) {
    printf("Cidade 1 tem maior pib.\n");
    } else {
    printf("Cidade 2 tem maior pib.\n");
    }
    if (pontos_turisticos > pontos_turisticos2) {
    printf("Cidade 1 tem mais pontos turisticos.\n");
    } else {
    printf("Cidade 2 tem mais pontos turisticos.\n");
    } 

    if (densidade_populacional > densidade_populacional2) {
    printf("Cidade 1 tem maior densidade populacional.\n");
    } else {
    printf("Cidade 2 tem maior densidade populacional.\n");
    } 

    if (pib_per_capita > pib_per_capita2) {
    printf("Cidade 1 tem maior PIB per capta.\n");
    } else {
    printf("Cidade 2 tem maior PIB per capta.\n");
    } 

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
