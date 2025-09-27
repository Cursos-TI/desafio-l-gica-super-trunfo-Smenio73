#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este programa cadastra duas cidades e compara um atributo (exemplo: população)
// para decidir qual carta vence.

int main() {
    // ==============================
    // Definição das variáveis
    // ==============================
    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // ==============================
    // Cadastro da Carta 1
    // ==============================
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o estado (UF): ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1); // lê string com espaços

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // ==============================
    // Cadastro da Carta 2
    // ==============================
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o estado (UF): ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // ==============================
    // Cálculos adicionais
    // ==============================
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ==============================
    // Comparação (atributo fixo: População)
    // ==============================
    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", nome2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
