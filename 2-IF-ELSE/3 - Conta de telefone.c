/*3. Desenvolva um programa para calcular a conta de seu celular, você deve digitar quantos minutos
foram utilizados e calcular conforme as regras a seguir:
 Até 100 minutos, incluindo a internet, total da conta R$39,99;
 Até 200 minutos, incluindo a internet, total da conta R$59,99;
 Até 500 minutos, incluindo a internet, total da conta R$99,99;
 Acima de 500 minutos, incluindo a internet, paga-se R$99,99 mais R$1,00 cada minuto
excedente.
Não se esqueça de apresentar na tela o total da conta.*/


#include <stdio.h>
// #include <windows.h>

int main(void)
{
 //  SetConsoleOutputCP(CP_UTF8);
    int minutos;
    float conta;

    printf("Informe a quantidade de minutos utilizados: ");
        scanf("%d", &minutos);

    if (minutos <= 100){
        conta = 39.99;
    }
    else if (minutos <= 200){
        conta = 59.99;
    }
    else if (minutos <= 500){
        conta = 99.99;
    }
    else {
        conta = 99.99 + ((minutos - 500) * 1.0);
    }

    printf("Total da conta: R$ %.2f\n", conta);

return 0;
}


/* 
CS50

#include<cs50.h>
#include<stdio.h>
int main(void)
{
    int minutos = get_int("Informe a quantidade de minutos utilizados: ");
    float conta;

    if (minutos <= 100){
        conta = 39.99;
    }
    else if (minutos <= 200){
        conta = 59.99;
    }
    else if (minutos <= 500){
        conta = 99.99;
    }
    else {
        conta = 99.99 + ((minutos - 500) * 1.0);
    }

    printf("Total da conta: R$ %.2f\n", conta);

return 0;
} // fim do programa */

