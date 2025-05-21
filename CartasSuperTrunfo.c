#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Carta 1
    int ddd;
    char nome[20];
    int populacao;
    float area;
    float pib;
    int turismo;

    //Carta 2
    int ddd2;
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Carta 1

    printf("Carta 1\n");
    printf("Digite o código da cidade: ");
    scanf("%d", &ddd);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &turismo);

    //Carta 2

    printf("Carta 2\n");
    printf("Digite o código da cidade: ");
    scanf("%d", &ddd2);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome2);
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &turismo2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Carta 1

    printf("--- Jogo SUPER TRUNFO --- \n");
    printf("--- Carta 1 ---\n");
    printf("Dados da cidade\n");
    printf("Código da cidade:%d \n", ddd);
    printf("Nome:%s \n", nome);
    printf("População:%d \n", populacao);
    printf("Área:%f \n", area);
    printf("PIB:%f \n", pib);
    printf("Número de pontos turísticos:%d \n", turismo);

    // Carta 2

    printf("--- Jogo SUPER TRUNFO --- \n");
    printf("--- Carta 2 ---\n");
    printf("Dados da cidade\n");
    printf("Código da cidade:%d \n", ddd2);
    printf("Nome:%s \n", nome2);
    printf("População:%d \n", populacao2);
    printf("Área:%f \n", area2);
    printf("PIB:%f \n", pib2);
    printf("Número de pontos turísticos:%d \n", turismo2);


    return 0;
}
