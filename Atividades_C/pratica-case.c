#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

  int opcao, numero, palpite;

  printf("Menu principal\n");
  printf("1. Iniciar jogo\n");
  printf("2. Regras do jogo\n");
  printf("3. Sair\n");
  printf("Escolha uma opção ");
  scanf("%d", &opcao);

  switch (opcao) {
   
   case 1:
   srand(time(0));
   numero = rand() % 10;
   printf("Digite um número de 0 a 9: ");
   scanf("%d", &palpite);
   printf("O número sorteado foi: %d\n", numero);
    if (numero == palpite) {
     printf("Boa mulecote, você acertou a bagaça.\n");
     printf("O número que o paizão aqui sortiou foi o: %d\n", numero);
    } else {
     printf("IH cara, você errou o número, tenta de novo ae parceiro.\n");
    }
    break;

    case 2:
    printf("As regras do jogo consistem em:\n");
    printf("Primeiro escolha um número de 0 a 9.\n");
    printf("Eu vou sortear um número aqui na minha cabeça.\n");
    printf("Se você acertar, vai ganhar um prêmio, que basicamente consiste em um `parabéns` e um abraço. Exato! Aqui não é Irmã Dulce.\n");
    printf("Por último, Divirta-se!\n");
    break;

    case 3:
    printf("Pode crê paezão, até qualquer dia!\n");
    break;

    default:
    printf("Entendi não parceiro, escolhe uma opção válida ae fazendo favor. \n");
    
  }
  return 0;
}