#include <stdio.h>

int main() {
    //Variáveis da primeira carta
    char estado1, codigo1[4], nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Entrada de dados da primeira carta
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1); // Inserir um espaço antes do %c para evitar problemas com buffer do teclado

    printf("Digite o código da primeira carta (Ex: A01): ");
    scanf("%s", codigo1); // Captura string sem espaços

    printf("Digite o nome da primeira cidade: ");
    scanf(" %[^\n]", nome1); // Captura string com espaços (ex: "Rio de Janeiro")

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1); // Captura um número inteiro representando a população

    printf("Digite a área da primeira cidade km²: ");
    scanf("%f", &area1); // Captura um número decimal representando a área da cidade

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1); // Captura um número decimal representando o PIB da cidade em bilhões

    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontosTuristicos1); // Captura o número de pontos turísticos da cidade

    // Variáveis da segunda carta
    char estado2, codigo2[4], nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada de dados da segunda carta (mesmo processo da primeira carta).
    printf("\nDigite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da segunda carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da segunda cidade: ");
    scanf(" %[^\n]", nome2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda cidade km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;  // Calcula a densidade populacional (habitantes por km²)
    densidade2 = populacao2 / area2;  // Calcula a densidade populacional para a segunda cidade

    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // PIB per Capita conversão para reais dividido pela população
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; // PIB per Capita para a segunda cidade

    // Cálculos do super poder
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (2 / densidade1);

    // Informações cadastradas de todas as cartas
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Exibe a densidade populacional
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1); // Exibe o PIB per Capita
    printf("Super Poder: %.2f\n", superPoder1); // Exibe o Super Poder

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação das cartas, a maior vence!
    printf("\n===== Comparação de Cartas =====\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2); 
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);

    return 0;
}