#include <stdio.h>

int main(){
    int populacao;
    int Npontosturisticos;
    float area;
    float pib;
    char nome[60];
    char codigo[60];
    char estado[60];

    int populacao2;
    int Npontosturisticos2;
    float area2;
    float pib2;
    char nome2[60];
    char codigo2[60];
    char estado2[60];

    printf("Carta:1\n");
    printf("Digite a letra do estado: \n");
    scanf("%s", &estado);
    
    printf("Digite o código de uma letra e dois números: \n");
    scanf("%s", &codigo);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome);

    printf("Qual é o número populacional: \n");
    scanf("%d", &populacao);

    printf("Qual a Área em km²: \n");
    scanf("%f", &area);

    printf("Qual o PIB: \n");
    scanf("%f", &pib);

    printf("Quantos pontos Turísticos tem: \n");
    scanf("%d", &Npontosturisticos);

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

    printf("\nCarta:1\n");
    printf("Estado: %s\n", estado);
    
    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\nPopulação: %d\n", nome, populacao);

    printf("Área: %.2fkm²\n", area);
    
    printf("PIB: %.2f\nNúmero de Pontos Turísticos: %d\n", pib, Npontosturisticos);

    printf("\nCarta:2\n");
    printf("Estado: %s\n", estado2);
        
    printf("Código: %s\n",codigo2);

    printf("Nome da Cidade: %s\nPopulação: %d\n", nome2, populacao2);

    printf("Área: %.2fkm²\n", area2);

    printf("PIB: %.2f\nNúmero de Pontos Turísticos: %d\n", pib2, Npontosturisticos2);
    
    return 0;








}