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

    float densidade_populacao1, densidade_populacao2;
    float pib_capta1, pib_capta2;
    float superpoder1, superpoder2;    


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

    //calculo os valores da densidade, pib per capta e super poder, realizando esse processo após os dados serem recebidos e armazenados

    densidade_populacao1 = (float) populacao1 / area1;
    pib_capta1 = pib1 / populacao1;
    densidade_populacao2 = (float) populacao2 / area2;
    pib_capta2 = pib2 / populacao2;

    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pib_capta1 - densidade_populacao1;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pib_capta2 - densidade_populacao2;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacao1);
    printf("Pib per capta: %.2f bilhões de reais por habitante\n", pib_capta1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade_populacao2);
    printf("Pib per capta: %.2f bilhões de reais por habitante\n", pib_capta2);



    printf("\nComparação de cartas:\n");
    
    printf("População: carta %d venceu", (populacao1 < populacao2) + 1);
    printf("%.*s\n", (populacao1 == populacao2) * 21, " *correção: empate*");

    printf("Area: carta %d venceu", (area1 < area2) + 1);
    printf("%.*s\n", (area1 == area2) * 21, " *correção: empate*");

    
    printf("PIB: carta %d venceu", (pib1 < pib2) + 1);
    printf("%.*s\n", (pib1 == pib2) * 21, " *correção: empate*");

    
    printf("Pontos Turísticos: carta %d venceu", (pontosTuristicos1 < pontosTuristicos2) + 1);
    printf("%.*s\n", (pontosTuristicos1 == pontosTuristicos2) * 21, " * *correção: empate**");

    
    printf("Densidade Populacional: carta %d venceu", (densidade_populacao1 > densidade_populacao2) + 1);
    printf("%.*s\n", (densidade_populacao1 == densidade_populacao2) * 21, " *correção: empate*");

    
    printf("PIB Per Capta: carta %d venceu", (pib_capta1 < pib_capta2) + 1);
    printf("%.*s\n", (pib_capta1 == pib_capta2) * 21, " *correção: empate*");


    printf("Super Poder: carta %d venceu", (superpoder1 < superpoder2) + 1);
    printf("%.*s\n", (superpoder1 == superpoder2) * 21, " *correção: empate*");


    /*
    Utilizei a formula (x1 < x2) + 1 para descobrir se a vencedora foi a carta 1 ou 2, pois o resultado é verdadeiro
    se a carta 1 for menor, o resultado é verdadeiro (1), e se a carta 1 for maior o resultado é falso (2)
    Utilizando esse truque e somando o resultado a 1, consegui fazer que ele diga carta 1 ou 2 dependendo do maior número
    sem precisar usar lógica, somente uma formula.
    O comparador é invertido na densidade pop pois nessa o menor número ganha.
    
    Tive dificuldade de lidar com empates sem usar if, no final usei uma gambiarra com printf, imprimindo um certo número de caracteres
    contendo a mensagem " *correção: empate*", para corrigir a resposta errada, usando o número de caracteres necessários multiplicado
    pelo resultado da comparação deles, se forem diferentes, o valor vai dar 0, fazendo a correção não aparecer.
    Não é uma solução elegante, mas para isso, eu precisaria utilizar estruturas condicionais, então essa foi a melhor solução que achei.
    */

    //encerrei a função main, finalizando o codigo
    return 0;
}