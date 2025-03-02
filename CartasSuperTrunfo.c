#include <stdio.h>

int main() {

    // Variáveis
    char estado1[3], estado2[3];  // Sigla do estado (ex: "SP")
    char codigo1[10], codigo2[10]; // Código de cidade
    char nome1[20], nome2[20]; // Nome da cidade
    int populacao1, populacao2; // População
    float area1, area2; // Área da cidade
    float pib1, pib2; // PIB da cidade
    int ponto1, ponto2; // Pontos turísticos

    // Entradas carta 1
    printf("Qual é o estado da primeira carta: ");
    scanf(" %2s", estado1); 

    printf("Qual é o código da cidade: ");
    scanf("%9s", codigo1); 

    printf("Qual é o nome da cidade: ");
    scanf(" %19s", nome1); 

    printf("Qual é o número de habitantes da cidade: ");
    scanf("%d", &populacao1); 

    printf("Qual é a área da cidade em km²: ");
    scanf("%f", &area1); 

    printf("Qual é o PIB da sua cidade: ");
    scanf("%f", &pib1); 

    printf("Quantos pontos turísticos tem a sua cidade: ");
    scanf("%d", &ponto1); 

    // Entradas carta 2

printf("agora vamos iniciar o preenchimento da proxima carta\n");

    printf("Qual é o estado da segunda carta carta: ");
    scanf(" %2s", estado2); 

    printf("Qual é o código da cidade: ");
    scanf("%9s", codigo2); 

    printf("Qual é o nome da cidade: ");
    scanf(" %19s", nome2); 

    printf("Qual é o número de habitantes da cidade: ");
    scanf("%d", &populacao2); 

    printf("Qual é a área da cidade em km²: ");
    scanf("%f", &area2); 

    printf("Qual é o PIB da sua cidade: ");
    scanf("%f", &pib2); 

    printf("Quantos pontos turísticos tem a sua cidade: ");
    scanf("%d", &ponto2); 
    
    
    // Exibir os dados da carta 1
    printf("\nDados da primeira carta:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", ponto1);

    // Exibir os dados da carta 2
    printf("\nDados da segunda carta:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", ponto2);

    return 0;
}
