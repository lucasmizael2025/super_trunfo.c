#include <stdio.h>

int main() {
    char estado;
    char codigodacarta[02];   
    char nomedacidade[50];   
    int populacao, pontos_turisticos;
    float area;
    float pib;
    
    printf("Digite seu estado: \n");
    scanf(" %c", &estado);
    
    printf("Digite o código da carta: \n");
    scanf("%s", codigodacarta);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", nomedacidade);
     
    printf("Digite a população: \n");
    scanf("%d", &populacao);
    
    printf("Digite os pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);
     
    printf("Digite a área: \n");
    scanf("%f", &area);
     
    printf("Digite o PIB: \n");
    scanf("%f", &pib);


}
