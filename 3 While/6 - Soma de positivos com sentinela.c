/*6. Construa um programa que imprime a soma de todos os valores positivos            
digitados pelo usuário até que ele digite um número negativo. */
 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float numero = 0, soma = 0;

    while (numero >= 0){
        printf("Digite um número positivo para somar ou um número negativo para encerrar o programa: ");
            scanf("%f", &numero);

        if (numero >= 0){
            soma += numero;
            printf("A soma dos números digitados é: %.2f\n", soma);
        }

    }

    printf("Programa encerrado!\n");

return 0;
}
