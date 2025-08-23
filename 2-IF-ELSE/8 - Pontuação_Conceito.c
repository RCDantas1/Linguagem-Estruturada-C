/*  8. Imagine uma prova com 100 questões, cada uma valendo 1 ponto, devendo o             
resultado ser divulgado através de conceitos de acordo com a seguinte tabela: 
 
Pontos         Conceito 
0 a 49             D 
50 a 69            C 
70 a 89            B 
90 a 100           A 
 
Escreva um programa que exiba o conceito da pontuação obtida. */


#include <stdio.h>
//  #include <windows.h>

int main(void)
{
  //  SetConsoleOutputCP(CP_UTF8);

    int pontos;
    char conceito;
    
    printf("Digite a pontuação: ");
    scanf("%d", &pontos);
    
    if (pontos <= 49){
    conceito = 'D';
    }
    else if (pontos <= 69){
    conceito = 'C';
    }
    else if (pontos <= 89){
    conceito = 'B';
    }
    else{
    conceito = 'A';
    }
    
    printf("Conceito = %c\n", conceito);
    
  return 0;
}  //fim do programa



/* CS50

#include <stdio.h>
#include <cs50.h>

int main() {

    int pontos = get_int("Digite a pontuação: ");
    char conceito;
    
    if (pontos <= 49){
        conceito = 'D';
    }
    else if (pontos <= 69){
        conceito = 'C';
    }
    else if (pontos <= 89){
        conceito = 'B';
    }
    else{
        conceito = 'A';
    }

    printf("Conceito = %c\n", conceito);

  return 0;
}  //fim do programa  */