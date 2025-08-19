/* 3. Faça um programa que receba o custo de um espetáculo teatral e o preço do                
convite desse espetáculo. Esse programa deve calcular e mostrar a          
quantidade de convites que devem ser vendidos para que pelo menos o            
custo do espetáculo seja alcançado. */

#include <stdio.h>
#include <windows.h>

int main(void)
{
  SetConsoleOutputCP(CP_UTF8);
    float custo_total, valor_ingresso;
    int quantidade_ingressos;
    
    printf("Digite o custo total do espetáculo: ");
    scanf("%f", &custo_total);
    
    printf("Digite o valor do ingresso: ");
    scanf("%f", &valor_ingresso);
    
    quantidade_ingressos = custo_total / valor_ingresso;
    
    printf("A quantidade de ingressos que devem ser vendidos para cobrir o custo do espetáculo é: %d.\n", quantidade_ingressos);
    
    return 0;
} // fim do programa;