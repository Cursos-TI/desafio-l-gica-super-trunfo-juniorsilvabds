#include <stdio.h>

int main() {
    // Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[30];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[30];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Entrada dos dados da Carta 1
    printf("Digite o estado (A-H) da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da Carta 1 (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a populacao da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a area da Carta 1 (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da Carta 2
    printf("\nDigite o estado (A-H) da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da Carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a populacao da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a area da Carta 2 (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Exibindo os dados
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);

    // Comparação pelo atributo População
    printf("\n=== RESULTADO DA COMPARACAO (Populacao) ===\n");
    if (populacao1 > populacao2) {
        printf("A Carta 1 venceu!\n");
    } else if (populacao2 > populacao1) {
        printf("A Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0
}
