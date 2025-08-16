#include <stdio.h>
#include <windows.h>

int main(void)
{
  SetConsoleOutputCP(CP_UTF8);

  int numero;

  printf("Digite o número: ");
  scanf("%d", &numero);

  if (numero % 2 == 0)
  {
    printf("O número é múltiplo de 2.");
  }
  else
  {
    printf("O número não é múltiplo de 2.");
  }

  return 0;
}