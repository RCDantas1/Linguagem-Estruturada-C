/*1. Faça um programa em linguagem C em que o usuário digita 3 números inteiros e ele mostra na tela
qual é o menor número.*/

#include <stdio.h>
#include <windows.h>

int main(void)
{
  SetConsoleOutputCP(CP_UTF8);
  int n1, n2, n3;

  printf("Digite o primeiro número: ");
    scanf("%d", &n1);
  printf("Digite o segundo número: ");
    scanf("%d", &n2);
  printf("Digite o terceiro número: ");
    scanf("%d", &n3);
    
  if (n1 < n2 && n1 < n3)
  {
    printf("O menor número é: %i\n", n1);
  }
  else if (n2 < n1 && n2 < n3)
  {
    printf("O menor número é: %i\n", n2);
  }
  else
  {
    printf("O menor número é: %i\n", n3);
  }

  return 0;
}  //fim do programa


/* abaixo segue o código simplificado com a biblioteca CS50:

#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n1 = get_int("Digite o primeiro número: ");
  int n2 = get_int("Digite o segundo número: ");
  int n3 = get_int("Digite o terceiro número: ");

  if (n1 < n2 && n1 < n3)
  {
    printf("O menor número é: %i\n", n1);
  }
  else if (n2 < n1 && n2 < n3)
  {
    printf("O menor número é: %i\n", n2);
  }
  else
  {
    printf("O menor número é: %i\n", n3);
  }

  return 0;
} */

