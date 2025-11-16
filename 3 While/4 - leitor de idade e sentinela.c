/*4. Faça um programa que receba a idade de várias pessoas e que calcule e mostre a quantidade de 
pessoas com idade maior ou igual a 30 anos. O programa deve parar de ler as idades quando ler 
uma idade igual a 0.*/



#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int idade = 1, maior_30 = 0;

    while (idade != 0){
        printf("Digite a idade ou digite 0 (zero) para encerrar: ");
            scanf("%d", &idade);

        if (idade >= 30)
            maior_30++;
    }

    printf("O total de pessoas com idade igual ou superior a 30 anos é: %d", maior_30);

return 0;
}
