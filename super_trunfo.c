#include <stdio.h>

int main() {
    char estado;
    char codigodacarta[3];    
    char nomedacidade[50];    
    int populacao, pontos_turisticos;
    float area;
    float pib;
    float densidadePopulacional;
    float pibPerCapita;
    
    printf("Digite seu estado (sigla, ex: C): \n");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta (ex: A1): \n");
    scanf("%2s", codigodacarta);  
    
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomedacidade); 
    
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);
     
    printf("Digite a área: \n");
    scanf("%f", &area);
     
    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Digite a densidade populacional: \n");
    scanf("%f", &densidadePopulacional);
    
    printf("Digite o PIB per capita: \n");
    scanf("%f", &pibPerCapita);
    

    return 0;
}

    

  
