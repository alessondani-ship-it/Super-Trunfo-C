#include<stdio.h>

char aluno1[20];
char aluno2[20];
char aluno3[20];
char aluno4[20];

float primeironota1, primeironota2, primeironota3, primeironota4;
float segundonota1, segundonota2, segundonota3, segundonota4;
float media1, media2;

void receberdados() {

 printf("Digite o nome do primeiro aluno: ");
 scanf("%s", aluno1);
 printf("Digite a nota do primeiro bimestre: ");
 scanf("%f", &primeironota1);
 printf("Digite a nota do segundo bimestre: ");
 scanf("%f", &primeironota2);
 printf("Digite a nota do terceiro bimestre: ");
 scanf("%f", &primeironota3);
 printf("Digite a nota do quarto bimestre: ");
 scanf("%f", &primeironota4);

 printf("Digite o nome do segundo aluno: ");
 scanf("%s", aluno2);
 printf("Digite a nota do primeiro bimestre: ");
 scanf("%f", &segundonota1);
 printf("Digite a nota do segundo bimestre: ");
 scanf("%f", &segundonota2);
 printf("Digite a nota do terceiro bimestre: ");
 scanf("%f", &segundonota3);
 printf("Digite a nota do quarto bimestre: ");
 scanf("%f", &segundonota4);
 
}

void calcularnota() {

  media1 = (primeironota1 + primeironota2 + primeironota3 + primeironota4) / 4;
  media2 = (segundonota1 + segundonota2 + segundonota3 + segundonota4) / 4;

}

void imprimirdados() {

 printf("%s, Média final é: %.2f\n", aluno1, media1);
 printf("%s, Média final é: %.2f\n", aluno2, media2);
 
}
int main() {
 
  receberdados();
  calcularnota();
  imprimirdados();
 return 0;

}