/* 1. Faça um programa que calcule e mostre a área de um triângulo. Sabe-se             
que: Área = (base * altura)/2. */

#include <stdio.h>
#include <windows.h>

int main(void)
{
  SetConsoleOutputCP(CP_UTF8);
    
    float base, altura, area;
    
    printf("Digite a base do triângulo: ");
    scanf("%f", &base);
    
    printf("Digite a altura do trinângulo: ");
    scanf("%f", &altura);
    
    area = (base * altura) / 2;
    
    printf("Área do triângulo = %.2f.\n", area);

    return 0; 
}   // Fim do programa.