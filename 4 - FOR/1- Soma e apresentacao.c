/* 1. Faça um programa para calcular a soma de 10 números inteiros digitados pelo usuário e apresentá-los na tela. */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int soma = 0;
    int numero[10];

    for (int i = 0; i < (sizeof(numero) / sizeof(numero[0])); i++){
        printf("Digite um número inteiro: ");
            scanf("%d", &numero[i]);

        soma = soma + numero[i];
    }
    
    printf("\nNúmeros digitados: ");
    for (int i = 0; i < (sizeof(numero) / sizeof(numero[0])); i++){
        printf("%d ", numero[i]);
    }
    printf("\nA soma dos números digitados é %d\n", soma);

return 0;
}
