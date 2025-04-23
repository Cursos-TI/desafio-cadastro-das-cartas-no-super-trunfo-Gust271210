#include <stdio.h>
#include <string.h>

#define QTD_CARTAS 2 // Número de cartas a serem cadastradas

struct Carta {
    char estado[50];
    char codcarta[50];
    char nomecidade[50];
    int populacao;
    float area;
    float pib;
    int numeroponto;
};

int main() {
    struct Carta cartas[QTD_CARTAS];

    for (int i = 0; i < QTD_CARTAS; i++) {
        printf("\n--- Preenchendo dados da carta %d ---\n", i + 1);

        printf("Digite seu estado:\n");//exibe saida e entrada de dados 
        fgets(cartas[i].estado, sizeof(cartas[i].estado), stdin);
        cartas[i].estado[strcspn(cartas[i].estado, "\n")] = '\0';

        printf("Digite o código:\n");//exibe saida e entrada de dados 
        scanf("%s", cartas[i].codcarta);
        getchar(); // limpa o \n

        printf("Digite o nome da cidade:\n");//exibe saida e entrada de dados 
        fgets(cartas[i].nomecidade, sizeof(cartas[i].nomecidade), stdin);
        cartas[i].nomecidade[strcspn(cartas[i].nomecidade, "\n")] = '\0';

        printf("Digite a população:\n");//exibe saida e entrada de dados 
        scanf("%d", &cartas[i].populacao);

        printf("Digite a area em km²:\n");//exibe saida e entrada de dados 
        scanf("%f", &cartas[i].area);
        
        printf("Digite o PIB:\n");//exibe saida e entrada de dados 
        scanf("%f", &cartas[i].pib);

        printf("Digite o número de pontos turísticos:\n");//exibe saida e entrada de dados 
        scanf("%d", &cartas[i].numeroponto);
        getchar(); // limpa o \n
    }

    // Exibindo os dados das cartas cadastradas
    printf("\n===== CARTAS DIGITADAS =====\n");
    for (int i = 0; i < QTD_CARTAS; i++) {
        printf("\n--- Carta %d ---\n", i + 1);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Código da carta: %s\n", cartas[i].codcarta);
        printf("Nome da cidade: %s\n", cartas[i].nomecidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f\n", cartas[i].pib);
        printf("Número de pontos turísticos: %d\n", cartas[i].numeroponto);
    }

    return 0;
}
