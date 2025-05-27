#include <stdio.h>
#include <string.h>

// Variáveis da Carta 1
int ddd, populacao, turismo;
char nome[20];
float area, pib;
float densidade, percapita;

// Variáveis da Carta 2
int ddd2, populacao2, turismo2;
char nome2[20];
float area2, pib2;
float densidade2, percapita2;

// Função para entrada dos dados da carta 1
void dadoscarta1() {
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
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turismo);
    densidade = populacao / area;
    percapita = pib / populacao;
}

// Função para entrada dos dados da carta 2
void dadoscarta2() {
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
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &turismo2);
    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
}

int main() {
    int opcao;

    // Coleta de dados das duas cartas
    dadoscarta1();
    dadoscarta2();

    do {
        printf("\nEscolha um atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - Densidade demográfica (menor vence)\n");
        printf("6 - PIB per capita\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        printf("\n--- COMPARAÇÃO ---\n");
        printf("Carta 1: %s\n", nome);
        printf("Carta 2: %s\n", nome2);

        switch (opcao) {
            case 1:
                printf("Comparando População: %d x %d\n", populacao, populacao2);
                if (populacao > populacao2)
                    printf("Carta 1 VENCEU!\n");
                else if (populacao < populacao2)
                    printf("Carta 2 VENCEU!\n");
                else
                    printf("Empate!\n");
                break;

            case 2:
                printf("Comparando Área: %.2f x %.2f\n", area, area2);
                if (area > area2)
                    printf("Carta 1 VENCEU!\n");
                else if (area < area2)
                    printf("Carta 2 VENCEU!\n");
                else
                    printf("Empate!\n");
                break;

            case 3:
                printf("Comparando PIB: %.2f x %.2f\n", pib, pib2);
                if (pib > pib2)
                    printf("Carta 1 VENCEU!\n");
                else if (pib < pib2)
                    printf("Carta 2 VENCEU!\n");
                else
                    printf("Empate!\n");
                break;

            case 4:
                printf("Comparando Pontos Turísticos: %d x %d\n", turismo, turismo2);
                if (turismo > turismo2)
                    printf("Carta 1 VENCEU!\n");
                else if (turismo < turismo2)
                    printf("Carta 2 VENCEU!\n");
                else
                    printf("Empate!\n");
                break;

            case 5:
                printf("Comparando Densidade Demográfica (MENOR VENCE): %.2f x %.2f\n", densidade, densidade2);
                if (densidade < densidade2)
                    printf("Carta 1 VENCEU!\n");
                else if (densidade > densidade2)
                    printf("Carta 2 VENCEU!\n");
                else
                    printf("Empate!\n");
                break;

            case 6:
                printf("Comparando PIB Per Capita: %.2f x %.2f\n", percapita, percapita2);
                if (percapita > percapita2)
                    printf("Carta 1 VENCEU!\n");
                else if (percapita < percapita2)
                    printf("Carta 2 VENCEU!\n");
                else
                    printf("Empate!\n");
                break;

            case 0:
                printf("Saindo do jogo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
