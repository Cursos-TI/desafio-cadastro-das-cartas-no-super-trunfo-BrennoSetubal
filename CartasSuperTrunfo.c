#include <stdio.h>

int main(){
    // inicialização das variaveis
    char cod_cidade[4], nome[30];
    int populacao, pib, num_pontos_turisticos; 
    float area;

    // inicialização das variaveis da segunda carta
    char cod_cidade_2[4], nome_2[30];
    int populacao_2, pib_2, num_pontos_turisticos_2; 
    float area_2;

    // boas vindas
    printf("-+= Olá, bem vindo ao jogo Super Trunfo Países =+-\n");
    printf("\n");

    // Pegando os dados do usuarios
    // pegando o nome da cidade e armazenando seu valor na variavel nome
    printf("Digite o nome da primeira cidade.");
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

    // --------------------------------------------------------------------------------------------------------------------
    // pegando os dados da segunda carta
    // pegando o nome da segunda cidade 
    printf("\n");
    printf("Agora digite os dados da segunda carta/cidade.\n");
    printf("\n");

    printf("Digite o nome da segunda cidade.\n");
    scanf(" %s", nome_2);

    // pegando o código da segunda cidade 
    printf("Digite o código das segunda cidade. \nEsse código sege a mesma logica do anterior.\n");
    scanf("%s", cod_cidade_2);

    // pegando a população da segunda cidade
    printf("Digite a população da segunda cidade.\n");
    scanf("%d", &populacao_2);

    // pegando a área da segunda cidade 
    printf("Digite a área da segunda cidade.\n");
    scanf("%f", &area_2);

    // pegando o PIB da segunda cidade 
    printf("Digite o PIB da segunda cidade.\n");
    scanf("%d", &pib_2);

    // pegando o número de pontos turisticos da segunda cidade 
    printf("Digite o número de pontos turisticos da segunda cidade.\n");
    scanf("%d", &num_pontos_turisticos_2);

    // calculando a densidade populacional e o PIB percapta de ambas as cartas/cidade
    float densidade_populacional = (float) populacao / area;
    float pib_percapta = (float) pib / populacao;

    float densidade_populacional_2 = (float) populacao_2 / area_2;
    float pib_percapta_2 = (float) pib_2 / populacao_2;

    // comparações das cartas 
    // inicializando as variaveis que iram guardar as respostas da carta vencendora
    int vencedor_populacao, vencedor_area, vencedor_pib, vencedor_pip_per_capita, vencedor_dens_populacio, vencedor_n_pont_turist;

    // fazendo as comparações do modo mais facil posivel
    vencedor_populacao = populacao > populacao_2;
    vencedor_area = area > area_2;
    vencedor_pib = pib > pib_2;
    vencedor_pip_per_capita = pib_percapta > pib_percapta_2;
    vencedor_dens_populacio = (int) densidade_populacional < densidade_populacional_2; // vence quem for menor
    vencedor_n_pont_turist = num_pontos_turisticos > num_pontos_turisticos_2;

    // mostrando a primeira carta
    printf("\n");
    printf("-+=           Dados da primeira carta         =+-\n");
    printf("- Nome: %s\n", nome);
    printf("- Código: %s\n", cod_cidade);
    printf("- População: %d\n", populacao);
    printf("- Área: %.2f\n", area);
    printf("- PIB: %d\n", pib);
    printf("- PIB Percapta: %.2f\n", pib_percapta);
    printf("- Densidade populacional: %.3f\n", densidade_populacional);
    printf("- Números de pontos turisticos: %d\n", num_pontos_turisticos);
    printf("-+=                                           =+-\n");
    printf("\n");

    // mostrando a segunda carta
    printf("\n");
    printf("-+=           Dados da segunda carta          =+-\n");
    printf("- Nome: %s\n", nome_2);
    printf("- Código: %s\n", cod_cidade_2);
    printf("- População: %d\n", populacao_2);
    printf("- Área: %.2f\n", area_2);
    printf("- PIB: %d\n", pib_2);
    printf("- PIB Percapta: %.2f\n", pib_percapta_2);
    printf("- Densidade populacional: %.3f\n", densidade_populacional_2);
    printf("- Números de pontos turisticos: %d\n", num_pontos_turisticos_2);
    printf("-+=                                           =+-\n");
    printf("\n");

    // mostrando a comparação das cartas e explicando como ocorrerar para o usuario
    printf("\n");
    printf("A compração ocorrerá da seguinte maneira.\n");
    printf("Se for mostrado 1 o vencedor é a primeira cidade.\n");
    printf("Se for mostrado 0 o vencedor é a segunda cidade.\n");     
    printf("Exceto o fator Densidade Populacional a carta com maior valor ganha.\n");
    printf("\n");
    printf("-+=           Comparação das cartas           =+-\n");
    printf("- População: %d\n", vencedor_populacao);
    printf("- Área: %d\n", vencedor_area);
    printf("- PIB: %d\n", vencedor_pib);
    printf("- PIB Per Capita: %d\n", vencedor_pip_per_capita);
    printf("- Densidade Populacional: %d\n", vencedor_dens_populacio);
    printf("- Pontos Turisticos: %d\n", vencedor_n_pont_turist);
    printf("\n");

    return 0;
}