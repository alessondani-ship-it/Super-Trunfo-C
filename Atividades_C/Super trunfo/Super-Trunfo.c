#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {

 char estado1 [10];
 char codigo1 [10];
 char cidade1 [10];
 char estado2 [10];
 char codigo2 [10];
 char cidade2 [10];

 float populacao1, area1, pib1, populacao2, area2, pib2;
 
 int pontosturisticos1, pontosturisticos2;


 printf("Digite o Estado da primeira carta: ");
 fgets(estado1, 10, stdin);
 estado1[strcspn(estado1, "\n")] = '\0';
 getchar();
 //scanf("%s", estado1);

 printf("Digite o Codigo da primeira carta: ");
 fgets(codigo1, 10, stdin);
 codigo1[strcspn(codigo1, "\n")] = '\0';
 getchar();
 //scanf("%s", codigo1);

 printf("Digite a Cidade da primeira carta: ");
 fgets(cidade1, 10, stdin);
 cidade1[strcspn(cidade1, "\n")] = '\0';
 getchar();
 //scanf("%s", cidade1);

 printf("Digite a População da primeira carta: ");
 scanf("%f", &populacao1);

 printf("Digite a Área da primeira carta: ");
 scanf("%f", &area1);

  float densidade_populacional1 = populacao1 / area1;

 printf("Digite o PIB da primeira carta: ");
 scanf("%f", &pib1);

  float pib_percapito1 = populacao1 / pib1;

 printf("Digite a quantidade de Pontos da primeira carta: ");
 scanf("%i", &pontosturisticos1);

 printf("Digite o Estado da segunda carta carta: ");
 fgets(estado2, 10, stdin);
 estado2[strcspn(estado2, "\n")] = '\0';
 getchar();
 //scanf("%s", estado2);

 printf("Digite o Codigo da segunda carta carta: ");fgets(codigo2, 10, stdin);
 codigo2[strcspn(codigo2, "\n")] = '\0';
 getchar();
 //canf("%s", codigo2);

 printf("Digite a Cidade da segunda carta carta: ");fgets(cidade2, 10, stdin);
 cidade2[strcspn(cidade2, "\n")] = '\0';
 getchar();
 //scanf("%s", cidade2);

 printf("Digite a População da segunda carta carta: ");
 scanf("%f", &populacao2);

 printf("Digite a Área da segunda carta carta: ");
 scanf("%f", &area2);

  float densidade_populacional2 = populacao2 / area2;

 printf("Digite o PIB da segunda carta carta: ");
 scanf("%f", &pib2);

  float pib_percapito2 = populacao2 / pib2;

 printf("Digite a quantidade de Pontos da segunda carta carta: ");
 scanf("%i", &pontosturisticos2);

 /*printf("Carta 1\nO estado é: %s\nO código é: %s\nNome da cidade: %s\nPopulação: %.3f\nÁrea: %.3f\nPIB: %.3f\nPontos turisticos: %i\nDensidade Populacional: %.3f\nPIB Per Capita: %.3f\n\nCarta 2\nO estado é: %s\nO código é: %s\nNome da cidade: %s\nPopulação: %.3f\nÁrea: %.3f\nPIB: %.3f\nPontos turisticos: %i\nDensidade Populacional: %.3f\nPIB Per Capita: %.3f",estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturisticos1, densidade_populacional1, pib_percapito1, estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2, densidade_populacional2, pib_percapito2); */

 return 0;

}