#include <stdio.h>

    // Variaveis Carta 1
    int ddd, populacao, turismo;
    char nome[20];
    float area, pib;
    float densidade;
    float percapita;

    // Variaveis Carta 2
    int ddd2, populacao2, turismo2;
    char nome2[20];
    float area2, pib2;
    float densidade2;
    float percapita2;

void dadoscarta1(){ //Carta 1

    //Entrada de dados
    printf("Carta 1\n");
    printf("Digite o código da cidade: ");
    scanf("%d", &ddd);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &turismo);
};

void dadoscarta2(){ //Carta 2

    //Entrada de dados
    printf("Carta 2\n");
    printf("Digite o código da cidade: ");
    scanf("%d", &ddd2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &turismo2);
};

int main() {
    // Chamada das funções de entrada de dados
    dadoscarta1();
    dadoscarta2();

    // Saida de dados Carta 1
    printf("--- Jogo SUPER TRUNFO --- \n");
    printf("--- Carta 1 ---\n");
    printf("Dados da cidade\n");
    printf("Código da cidade:%d \n", ddd);
    printf("Nome:%s \n", nome);
    printf("População:%d \n", populacao);
    printf("Área:%f \n", area);
    printf("PIB:%f \n", pib);
    printf("Número de pontos turísticos:%d \n", turismo);
    densidade = (populacao / area);
    printf("A densidade populacional é de: %.2f \n", densidade);
    percapita = (pib / populacao);
    printf("PIB Percapita: %.2f \n", percapita);

    // Saida de dados Carta 2
    printf("--- Jogo SUPER TRUNFO --- \n");
    printf("--- Carta 2 ---\n");
    printf("Dados da cidade\n");
    printf("Código da cidade:%d \n", ddd2);
    printf("Nome:%s \n", nome2);
    printf("População:%d \n", populacao2);
    printf("Área:%f \n", area2); 
    printf("PIB:%f \n", pib2);
    printf("Número de pontos turísticos:%d \n", turismo2);
    densidade2 = (populacao2 / area2);
    printf("A densidade populacional é de: %.2f \n", densidade2);
    percapita2 = (pib2 / populacao2);
    printf("PIB Percapita: %.2f \n", percapita2);



    return 0;
}
