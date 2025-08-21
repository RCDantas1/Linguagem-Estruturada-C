/* 4. Faça um programa que teste se um número é múltiplo de 2 (par ou ímpar).*/


#include <stdio.h>
//   #include <windows.h>

int main(void)
{
 //  SetConsoleOutputCP(CP_UTF8);

	int numero;
    
    printf("Digite o número: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0){
    	printf("O número %d é múltiplo de 2 (par).\n", numero);
        }
    else {
   		printf("O número %d não é múltiplo de 2 (ímpar).\n", numero);
    	}
    
  return 0;
}  // fim do programa

