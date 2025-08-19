/*** 5. Faça um programa que leia o peso de uma pessoa, a altura, e calcule o                
índice de massa corpórea (IMC). Mostre o resultado na tela. A Fórmula para            
calcular o IMC = peso / altura2. ***/

#include <stdio.h>
#include <windows.h>

int main(void)
{
  SetConsoleOutputCP(CP_UTF8);
    float peso, altura, imc;
    printf("########## CÁLCULO DO IMC ##########\n");
    
    printf("Digite o peso: ");
    scanf("%f", &peso);
    
    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("O índice de massa corpórea (IMC) é: %.2f.", imc);
    
    return 0;
}  // fim do programa;