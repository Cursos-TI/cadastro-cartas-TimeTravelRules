#include <stdio.h>

int main() {
    //Criei as variavéis simples, agrupando as iguais na mesma linha
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    float densidade_populacao, pib_capta;
    

    printf("Cadastro da Carta 1\n");

    //Criei as variaveis usando de um printf para dar a prompt, e um scanf para ler e armazenar a resposta
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    //calculo os valores da densidade e pib per capta, realizando esse processo após os dados serem recebidos e armazenados

    densidade_populacao = (float) populacao1 / area1;
    pib_capta = pib1 * 1000000000 / populacao1;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacao);
    printf("Pib per capta: %.2f\n", pib_capta);

    //Reaproveito a mesma variavel para a segunda carta, mudando seu valor após terminar de utilizá-la para a carta 1

    densidade_populacao = (float) populacao2 / area2;
    pib_capta = pib2 * 1000000000 / populacao2;

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacao);
    printf("Pib per capta: %.2f\n", pib_capta);

    //encerrei a função main, finalizando o codigo
    return 0;
}