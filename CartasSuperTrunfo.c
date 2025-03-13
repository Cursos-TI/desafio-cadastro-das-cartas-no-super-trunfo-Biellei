#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    char primeiroAtibuto, segundoAtributo;
    int resultado1, resultado2;

    int populacao1;
    int Npontosturisticos1;
    float area1;
    float pib1;
    char nome1[60];
    char codigo1[60];
    char estado1[60];
    float densidade_popula1;
    float pib_per_capita1;
    float superpoder1;

    int populacao2;
    int Npontosturisticos2;
    float area2;
    float pib2;
    char nome2[60];
    char codigo2[60];
    char estado2[60];
    float densidade_popula2;
    float pib_per_capita2;
    float superpoder2;

    // Está pedindo as informações da carta1
    printf("Carta 1:\n");
    printf("Digite a letra do estado: \n");
    scanf("%s", &estado1);
    
    printf("Digite o código de uma letra e dois números: \n");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome1);

    printf("Qual é o número populacional: \n");
    scanf("%d", &populacao1);

    printf("Qual a Área em km²: \n");
    scanf("%f", &area1);

    printf("Qual o PIB: \n");
    scanf("%f", &pib1);

    printf("Quantos pontos Turísticos tem: \n");
    scanf("%d", &Npontosturisticos1);

    //Está pedindo as informações da carta2
    printf("Carta:2\n");
    printf("Digite a letra do estado: \n");
    scanf("%s", &estado2);

    printf("Digite o código de uma letra e dois números: \n");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome2);

    printf("Qual é o número populacional: \n");
    scanf("%d", &populacao2);

    printf("Qual a Área em km²: \n");
    scanf("%f", &area2);

    printf("Qual o PIB: \n");
    scanf("%f", &pib2);

    printf("Quantos pontos Turísticos tem: \n");
    scanf("%d", &Npontosturisticos2);

    //Calculos de dencidade populacional, pib per capita e super poder
    densidade_popula1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pib_per_capita1 + (1 / densidade_popula1);

    densidade_popula2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pib_per_capita2 + (1 / densidade_popula2);
    srand(time(0));

    //Seleção dos dois atributos que vão ser comparados
    printf("\n###Super Trunfo###\n");
    printf("Escolha o Primeiro atributo para comparar:\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Número de pontos turisticos\n");
    printf("E. Densidade Popualacional\n");
    printf("F. PIB per capita\n");
    printf("G. Super Poder\n");
    printf("Escolha: ");
    scanf(" %c", &primeiroAtibuto);

    switch (primeiroAtibuto)
    {
    case 'A':
    case 'a':
        printf("Você escolheu População!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 'B':
    case 'b':
        printf("Você escolheu Área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    case 'C':
    case 'c':
        printf("Você escolheu PIB!\n");
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;
    case 'D':
    case 'd':
        printf("Você escolheu Número de Pontos Turisticos!\n");
        resultado1 = Npontosturisticos1 > Npontosturisticos2 ? 1 : 0;
        break;
     case 'E':
     case 'e':
        printf("Você escolheu Densidade Populacional!\n");
        resultado1 = densidade_popula1 < densidade_popula2 ? 1 : 0;
        break;
    case 'F':
    case 'f':
        printf("Você escolheu PIB per Capita!\n");
        resultado1 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
        break;
    case 'G':
    case 'g':
        printf("Você escolheu Super Poder!\n");
        resultado1 = superpoder1 > superpoder2 ? 1 : 0;
        break;
    default:
        printf("Atributo de carta inválido!\n");
        break;
    }

    printf("\n###Super Trunfo###\n");
    printf("Escolha o Segundo atributo para comparar:\n");
    printf("A. População\n");
    printf("B. Área\n");
    printf("C. PIB\n");
    printf("D. Número de pontos turisticos\n");
    printf("E. Densidade Popualacional\n");
    printf("F. PIB per capita\n");
    printf("G. Super Poder\n");
    printf("Escolha: ");
    scanf(" %c", &segundoAtributo);
   
    if (primeiroAtibuto == segundoAtributo)
    {
        printf("Você escolheu o mesmo atributo de carta!\n");
    } else {
        switch (segundoAtributo)
        {
        case 'A':
        case 'a':
            printf("Você escolheu População!\n");
            resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
        case 'B':
        case 'b':
            printf("Você escolheu Área!\n");
            resultado2 = area1 > area2 ? 1 : 0;
            break;
        case 'C':
        case 'c':
            printf("Você escolheu PIB!\n");
            resultado2 = pib1 > pib2 ? 1 : 0;
            break;
        case 'D':
        case 'd':
            printf("Você escolheu Número de Pontos Turisticos!\n");
            resultado2 = Npontosturisticos1 > Npontosturisticos2 ? 1 : 0;
            break;
        case 'E':
        case 'e':
            printf("Você escolheu Densidade Populacional!\n");
            resultado2 = densidade_popula1 < densidade_popula2 ? 1 : 0;
            break;
        case 'F':
        case 'f':
            printf("Você escolheu PIB per Capita!\n");
            resultado2 = pib_per_capita1 > pib_per_capita2 ? 1 : 0;
            break;
        case 'G':
        case 'g':
            printf("Você escolheu Super Poder!\n");
            resultado2 = superpoder1 > superpoder2 ? 1 : 0;
            break;
        default:
            printf("Atributo de carta inválido!\n");
            break;
        }




        if (resultado1 && resultado2)
        {
            printf("Carta1 venceu!\n");
        }else if (resultado1 != resultado2){
            printf("Empatou!\n");
        }else{
            printf("Carta2 venceu!\n");
        }
    }







}