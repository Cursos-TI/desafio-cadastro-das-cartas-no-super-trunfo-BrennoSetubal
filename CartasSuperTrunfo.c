#include <stdio.h>

int main(){

    // inicialização das variaveis
    char cod_cidade[4], nome[30];
    int populacao, pib, num_pontos_turisticos; 
    float area;

    // boas vindas
    printf("-+= Olá, bem vindo ao jogo Super Trunfo Países =+-\n");
    printf("\n");

    // Pegando os dados do usuarios
    // pegando o nome da cidade e armazenando seu valor na variavel nome
    printf("Digite o nome da cidade.");
    scanf(" %s", nome);

    // pegando o código da cidade e armazenando seu valor na variavel cod_cidade
    printf("Digite o código da cidade. Esse código deve ter apenas 3 caracteres.\n");
    printf("O código terar que iniciar com uma letra, essa letra será o estado...\n");
    printf("Que são 4, seguindo a ordem de A a H.\n");
    printf("E a cidade desse Estado dada em numero de 01 a 04\n");
    printf("Exemplo: A01, B03, C01...\n");
    scanf("%s", cod_cidade);

    // pegando a população e armazenando seu na variavel populacao
    printf("Digite a população da cidade.");
    scanf("%d", &populacao);

    // pegando a área da cidade e armazenando seu valor na variavel area
    printf("Digite a área da cidade.");
    scanf("%f", &area);
    
    // pegando o PIB da cidade e armazenando seu valor na variavel pib
    printf("Digite o PIB da cidade.");
    scanf("%d", &pib);

    // pegando o número de pontos turisticos e armazenando seu valor na variavel num_pontos_turisticos
    printf("Digite o número de pontos turisticos da cidade.");
    scanf("%d", &num_pontos_turisticos);

    // calculando a densidade populacional e o PIB percapta
    float densidade_populacional = (float) populacao / area;
    float pib_percapta = (float) pib / populacao;


    // mostrando a carta
    printf("\n");
    printf("-+=              Dados da carta               =+-\n");
    printf("- Nome: %s\n", nome);
    printf("- Código: %s\n", cod_cidade);
    printf("- População:%d\n", populacao);
    printf("- Área: %.2f\n", area);
    printf("- PIB: %d\n", pib);
    printf("- PIB Percapta: %.2f\n", pib_percapta);
    printf("- Densidade populacional: %.3f\n", densidade_populacional);
    printf("- Números de pontos turisticos: %d\n", num_pontos_turisticos);
    printf("-+=                                           =+-\n");
    printf("\n");

    

    return 0;
}