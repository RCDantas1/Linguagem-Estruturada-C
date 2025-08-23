/*  7. Desenvolva um programa para calcular e mostrar o desconto no valor de uma             
compra (fornecido pelo usuário), de acordo com a tabela: 
 
Valor                         Desconto 
Até R$ 1000,00                     10% 
De R$ 1001,00 a R$ 5000,00         20% 
Acima de R$ 5001,00                30%  */


#include <stdio.h>
//  #include <windows.h>

int main(void)
{
  //  SetConsoleOutputCP(CP_UTF8);

    float valor, desconto;
    
    printf("Digite o valor da compra R$ ");
    scanf("%f", &valor);
    
    if (valor <= 1000)
    desconto = valor * 0.10;
    else if (valor <= 5000)
    desconto = valor * 0.2;
    else
    desconto = valor * 0.3;
    
    printf("O valor do desconto é de R$ %.2f.\n", desconto);
    printf("O valor final da compra é de R$ %.2f.", (valor-desconto));

  return 0;
}  // fim do programa
