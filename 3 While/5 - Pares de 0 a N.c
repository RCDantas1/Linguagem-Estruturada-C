/*5. Desenvolva um programa que receba um número inteiro N. O programa deverá imprimir na tela os números pares de 0 até N.
Utilizeocomando While. */
 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int numero, cont = 0;

    printf("Digite um número inteiro: ");
        scanf("%d", &numero);

    while (cont <= numero){
        printf("%d\n", cont);

        cont += 2;
    }

return 0;
}


/*OU
int cont = 0,numero; 
printf("Digite o valor de n"); 
scanf("%d",&numero); 
while (cont <= numero){ 
    if (cont % 2 == 0) 
    printf("\n%d",cont); 
    cont++; 
    }*/
