/*1. Escreva um programa que leia várias notas e calcule a média, sabendo que ele deve mostrar a 
média quando a nota lida for menor que 0.  */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float nota = 1, soma = 0, media, cont = 0;

    while (nota >= 0){
        printf("Digite uma nota: ");
            scanf("%f", &nota);

        if (nota >=0){
        soma += nota;
        cont ++;
        }
    }

    media = soma / cont;
    printf("A média das notas digitadas é: %.2f\n", media);


return 0;
}
