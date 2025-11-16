/*2. Desenvolva um programa que faça a captura de N números reais. O programa deverá calcular o 
somatório e a média desses números. Pergunte o valor de N ao usuário.  */



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float n, nota, soma = 0, media, cont = 0;

    printf("Digite a quantidade de números reais para o cálculo: ");
        scanf("%f", &n);

    while (cont < n){
        printf("Digite a nota: ");
            scanf("%f", &nota);
        soma += nota;
        cont++;

    }
    media = soma / n;
    printf("A soma é: %.2f\n", soma);
    printf("A média é %.2f\n", media);


return 0;
}
