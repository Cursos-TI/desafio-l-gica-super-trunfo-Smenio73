#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Desenvolvendo a Lógica do Jogo
// Agora com menu interativo e comparação de atributos

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
    // Menu interativo
    // ==============================
    int escolha;
    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per capita\n");
    printf("Escolha um atributo para comparar: ");
    scanf("%d", &escolha);

    printf("\n=== Comparacao de Cartas ===\n");
    printf("Carta 1: %s (%s)\n", nome1, estado1);
    printf("Carta 2: %s (%s)\n\n", nome2, estado2);

    // ==============================
    // Switch para escolha do atributo
    // ==============================
    switch(escolha) {
        case 1: // População
            printf("Populacao: %d x %d\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Area: %.2f km² x %.2f km²\n", area1, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB: %.2f bilhoes x %.2f bilhoes\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

         case 4:
            if (pontos1 > pontos2) {
        printf("Vencedor: %s\n", nome1);
              } else if (pontos2 > pontos1) {
        printf("Vencedor: %s\n", nome2);
          } else {
        printf("Resultado: Empate!\n");
         }
         break;

        case 5: // Densidade demográfica (menor vence)
            printf("Densidade: %.4f hab/km² x %.4f hab/km²\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", nome1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 6: // PIB per capita
            printf("PIB per capita: %.2f x %.2f\n", pibPerCapita1, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2) {
                printf("Vencedor: %s\n", nome1);
            } else if (pibPerCapita2 > pibPerCapita1) {
                printf("Vencedor: %s\n", nome2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha entre 1 e 6.\n");
    }

    return 0;
}
