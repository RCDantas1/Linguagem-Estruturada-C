/*2. Sabendo que uma escola realiza 4 provas bimestrais durante seu ano letivo, faça um programa que
leia as 4 notas (N1,N2,N3,N4), calcule a média das notas e indique a situação do aluno, conforme
abaixo:*/

#include <stdio.h>
// #include <windows.h>

int main(void)
{
  // SetConsoleOutputCP(CP_UTF8);

    float n1, n2, n3, n4, media;

    printf("Digite a primeira nota: ");
        scanf("%f", &n1);
    printf("Digite a segunda nota: ");
        scanf("%f", &n2);
    printf("Digite a terceira nota: ");
        scanf("%f", &n3);
    printf("Digite a quarta nota: ");
        scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 6.0){
        printf("Média: %f. Situação: Aprovado\n", media);
    }
    else if (media > 4.0 && media < 6.0){
        printf("Média: %f. Situação: Recuperação\n", media);
    }
    else {
        printf("Média: %f. Situação: Reprovado\n", media);
    }

return 0;
} // fim do programa




/* CS50 //MODO 2:

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    float n1 = get_float("Digite a primeira nota: \n");
    float n2 = get_float("Digite a segunda nota: \n");
    float n3 = get_float("Digite a terceira nota: \n");
    float n4 = get_float("Digite a quarta nota: \n");

    float media = (n1 + n2 + n3 + n4) / 4;

    if (media >= 6.0){
        printf("Média: %f. Situação: Aprovado\n", media);
    }
    else if (media > 4.0 && media < 6.0){
        printf("Média: %f. Situação: Recuperação\n", media);
    }
    else {
        printf("Média: %f. Situação: Reprovado\n", media);
    }
return 0;
} // fim do programa  */ 
