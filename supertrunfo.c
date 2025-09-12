#include <stdio.h>
#include <string.h>


typedef struct {
    char estado[3];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

int main() {
    
    Carta carta1, carta2;

    // Carta 1
    strcpy(carta1.estado, "SP");
    strcpy(carta1.codigo, "A01");
    strcpy(carta1.cidade, "São Paulo");
    carta1.populacao = 12300000;
    carta1.area = 1521.11;
    carta1.pib = 699000000000.0;
    carta1.pontosTuristicos = 25;


    // Carta 2
    strcpy(carta2.estado, "RJ");
    strcpy(carta2.codigo, "B02");
    strcpy(carta2.cidade, "Rio de Janeiro");
    carta2.populacao = 6000000;
    carta2.area = 1182.30;
    carta2.pib = 410000000000.0;
    carta2.pontosTuristicos = 18;

   

     printf("Comparacao de cartas (Atributo: Populacao)\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n",
           carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n",
           carta2.cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("\nResultado: Empate!\n");
    }

    return 0;
}
