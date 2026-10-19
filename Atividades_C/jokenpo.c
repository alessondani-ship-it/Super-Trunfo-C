#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {

 int escolhajogador, escolhacomputador;
  srand(time(0));

  printf("Jogo do Jokenpo Maluco\n");
  printf("Escolha uma opção:\n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  printf("Escolha: ");
  scanf("%d", &escolhajogador);

  escolhacomputador = rand() % 3 + 1;

  switch (escolhajogador) {
   case 1:
   printf("Jogador: Pedra\n");
   break;
   case 2:
   printf("Jogador: Papel\n");
   break;
   case 3:
   printf("Jogador: Tesoura\n");
   break;
   default:
   printf("Opção invalida.\n");
   break;
  }
  
  switch (escolhacomputador) {
   case 1:
   printf("Computador: Pedra\n");
   break;
   case 2:
   printf("Computador: Papel\n");
   break;
   case 3:
   printf("Computador: Tesoura\n");
   break;
  }

  if (escolhacomputador == escolhajogador) {
   printf("Deu empate.");
  }
  else if ((escolhajogador == 1) && (escolhacomputador == 3) || 
           (escolhajogador == 2) && (escolhacomputador == 1) || 
           (escolhajogador == 3) && (escolhacomputador == 2)){
   printf("Você venceu pô, parabéns.");
  }
  else{
   printf("Computador venceu paezão, é uma pena... Tenta de novo ae.");
  }

  return 0;
  
  
}