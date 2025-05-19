#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int ddd;
    char nome[20];
    int populacao;
    float area;
    float pib;
    int turismo;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Digite o código da cidade: ");
    scanf("%i", &ddd);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome);
    printf("Digite a população da cidade: ");
    scanf("%i", &populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%i", &pib);
    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &turismo);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("--- Jogo SUPER TRUNFO --- \n");
    printf("Dados da cidade\n");
    printf("Código da cidade:%i \n", ddd);
    printf("Nome:%s \n", nome);
    printf("População:%i \n", populacao);
    printf("Área:%f \n", area);
    printf("PIB:%i \n", pib);
    printf("Número de pontos turísticos:%d \n", turismo);


    return 0;
}
