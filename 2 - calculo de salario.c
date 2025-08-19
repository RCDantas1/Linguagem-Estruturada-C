/* 2. Faça um programa que receba o salário de um funcionário, calcule e mostre              
o novo salário, sabendo-se que este sofreu um aumento de 25%.*/

#include <stdio.h>
#include <windows.h>

int main(void)
{
  SetConsoleOutputCP(CP_UTF8);

    float salario, novo_salario;
    
    printf("Digite o valor do salário: ");
    scanf("%f", &salario);
    
    novo_salario = salario * 1.25; 
    // ou novo_salario = salario + salario * 0.25;
    
    printf("O valor do novo salário é: R$ %.2f.\n", novo_salario);
    
    return 0;
}  // fim do programa;