#include <stdio.h>

int main() {
    int populacao, Npontosturisticos;
    float area, pib;
    char nome[30], codigo[10], estado[10];

    int populacao2, Npontosturisticos2;
    float area2, pib2;
    char nome2[30], codigo2[10], estado2[10];

    printf("Carta:1\nDigite a letra do estado: \n");
    scanf("%c", &estado);

    printf("Digite o código de uma letra e dois números: \n");
    scanf("%s", &codigo);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome);

    printf("Qual é o número populacional: \n");
    scanf("%d", &populacao);

    printf("Qual a Área em km²: \n");
    scanf("%.2f", &area);

    printf("Qual o PIB: \n");
    scanf("%.2f", &pib);

    printf("Quantos pontos Turísticos tem: \n");
    scanf("%d", &Npontosturisticos);

    printf("Carta:2\nDigite a letra do estado: \n");
    scanf("%c", &estado2);

    printf("Digite o código de uma letra e dois números: \n");
    scanf("%s", &codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &nome2);

    printf("Qual é o número populacional: \n");
    scanf("%d", &populacao2);

    printf("Qual a Área em km²: \n");
    scanf("%.2f", &area2);

    printf("Qual o PIB: \n");
    scanf("%.2f", &pib2);

    printf("Quantos pontos Turísticos tem: \n");
    scanf("%d", &Npontosturisticos2);

    printf("\nCarta:1\nEstado: %s\n", estado);
    
    printf("Código: %s\n", codigo);

    printf("Nome da Cidade: %s\nPopulação: %d\n", nome, populacao);

    printf("Área: %.2fkm²\n", area);

    
    printf("PIB: %.2f\nNúmero de Pontos Turísticos: %d\n", pib, Npontosturisticos);

    printf("\nCarta:2\nEstado: %s\n", estado2);
        
    printf("Código: %s\n", codigo2);

    printf("Nome da Cidade: %s\nPopulação: %d\n", nome2, populacao2);

    printf("Área: %.2fkm²\n", area2);

    printf("PIB: %.2f\nNúmero de Pontos Turísticos: %d\n", pib2, Npontosturisticos2);
    
    return 0;


}




