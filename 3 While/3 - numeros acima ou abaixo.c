/*3. Desenvolva um programa que faça a captura de 10 números reais e calcule a média. Na sequência, 
o programa deverá solicitar a inserção de mais 10 números reais. Para cada um desses números 
digitados, o programa deverá informar se está abaixo ou acima da média dos 10 primeiros números 
digitados. */



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    float media1, media2, soma = 0, n;
    int cont = 0;

    while (cont < 10){
        printf("Digite um número: ");
            scanf("%f", &n);

        soma += n;
        cont++;
    }

    media1 = (float) soma / cont;
    printf("A média dos 10 primeiros número é %.2f.\nDigite outros 10 números abaixo para comparar as médias.\n", media1);


    cont = 1;
    soma = 0;


    while (cont <= 10){
        printf("Digite um número: ");
            scanf("%f", &n);

        soma += n;

        media2 = (float) soma / cont;

        if (media2 > media1){
            printf("A média atual é %.2f. Ela está acima da média dos 10 primeiros número digitados.\n", media2);
        }
        else if (media2 = media1){
            printf("A média atual é %.2f. Ela está igual a média dos 10 primeiros número digitados.\n", media2);
        }
        else {
            printf("A média atual é %.2f. Ela está abaixo da média dos 10 primeiros número digitados.\n", media2);
        }

        cont++;
    }

return 0;
}
