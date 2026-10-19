#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char estado1[20];
char codigo1[20];
char cidade1[20];
char estado2[20];
char codigo2[20];
char cidade2[20];

double populacao1, area1, pib1, populacao2, area2, pib2;
double pib_percapito1, pib_percapito2, densidade_populacional1, densidade_populacional2;

int pontosturisticos1, pontosturisticos2;
int boasvindas;


void receberdados(void);
void calcularpibedensidade(void); 
void imprimirdados(void);
void comparar(void);
int jogo(void);


int main() {
    printf("### 🃏SUPER-TRUNFO🃏 ###\n");
    printf("1. Jogar\n");
    printf("2. Regras do Jogo\n");
    printf("3. Sair\n");
    printf("Escolha: ");
    scanf("%d", &boasvindas);

    switch (boasvindas) {
        case 1:
            jogo();
            break;
        case 2:
            printf("O 🃏SUPER-TRUNFO🃏 Consiste em:\n");
            printf("Informe os dados das cartas em sua posse.\n");
            printf("Compare os atributos.\n");
            printf("E QUE VENÇA A CARTA MAIS FORTE 🃏\n");
            
            break;
        case 3:
            printf("Até breve.\n");
            break;
        default:
            printf("Essa opção não é válida\n");
            break;
    }
    
    return 0;
}


void receberdados() {
    printf("\nVamos começar.\nDigite as informações das cartas.\n\n");
    
    printf("Digite o Estado da primeira carta: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o Codigo da primeira carta: ");
    scanf(" %[^\n]", codigo1);
    printf("Digite a Cidade da primeira carta: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População da primeira carta: ");
    scanf("%lf", &populacao1);
    printf("Digite a Área da primeira carta: ");
    scanf("%lf", &area1);
    printf("Digite o PIB da primeira carta: ");
    scanf("%lf", &pib1);
    printf("Digite a quantidade de Pontos Turísticos da primeira carta: ");
    scanf("%i", &pontosturisticos1);
    
    printf("\nDigite o Estado da segunda carta: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o Codigo da segunda carta: ");
    scanf(" %[^\n]", codigo2);
    printf("Digite a Cidade da segunda carta: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População da segunda carta: ");
    scanf("%lf", &populacao2);
    printf("Digite a Área da segunda carta: ");
    scanf("%lf", &area2);
    printf("Digite o PIB da segunda carta: ");
    scanf("%lf", &pib2);
    printf("Digite a quantidade de Pontos Turísticos da segunda carta: ");
    scanf("%i", &pontosturisticos2);
}

void calcularpibedensidade() {
    densidade_populacional1 = populacao1 / area1;
    pib_percapito1 = pib1 / populacao1;
    
    densidade_populacional2 = populacao2 / area2;
    pib_percapito2 = pib2 / populacao2;
}

void imprimirdados() {
    printf("\n=== CARTA 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %.3lf\n", populacao1);
    printf("Área: %.3lf\n", area1);
    printf("PIB: %.3lf\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.3lf\n", densidade_populacional1);
    printf("PIB per Capita: %.3lf\n\n", pib_percapito1);

    printf("=== CARTA 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.3lf\n", populacao2);
    printf("Área: %.3lf\n", area2);
    printf("PIB: %.3lf\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.3lf\n", densidade_populacional2);
    printf("PIB per Capita: %.3lf\n\n", pib_percapito2);
}

void comparar() {
    float carta1 = pib1 + pontosturisticos1 + pib_percapito1 + (1 / densidade_populacional1);
    float carta2 = pib2 + pontosturisticos2 + pib_percapito2 + (1 / densidade_populacional2);

    printf("\n=== RESULTADO DAS COMPARAÇÕES ===\n");

    if (populacao1 > populacao2)
        printf("População: Carta 1 venceu\n");
    else
        printf("População: Carta 2 venceu\n");

    if (area1 > area2)
        printf("Área: Carta 1 venceu\n");
    else
        printf("Área: Carta 2 venceu\n");

    if (pib1 > pib2)
        printf("PIB: Carta 1 venceu\n");
    else
        printf("PIB: Carta 2 venceu\n");

    if (pontosturisticos1 > pontosturisticos2)
        printf("Pontos Turísticos: Carta 1 venceu\n");
    else
        printf("Pontos Turísticos: Carta 2 venceu\n");

    if (densidade_populacional1 < densidade_populacional2)
        printf("Densidade Populacional: Carta 1 venceu\n");
    else
        printf("Densidade Populacional: Carta 2 venceu\n");

    if (pib_percapito1 > pib_percapito2)
        printf("PIB per Capita: Carta 1 venceu\n");
    else
        printf("PIB per Capita: Carta 2 venceu\n");

    printf("\n=== VENCEDOR FINAL ===\n");
    if (carta1 > carta2)
        printf("🏆 CARTA 1 VENCEU A PARTIDA! 🏆\n");
    else
        printf("🏆 CARTA 2 VENCEU A PARTIDA! 🏆\n");
}

int jogo(void) {
    receberdados();
    calcularpibedensidade();
    imprimirdados();
    comparar();
    return 0;
}