/*** 4. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande,            
cada uma sendo vendida respectivamente por x, y e z reais. Faça um             
programa em que o usuário forneça a quantidade de camisetas pequenas,            
médias e grandes referentes a uma venda, e a máquina informe quanto será             
o valor arrecadado. ***/

#include <stdio.h>
#include <windows.h>

int main(void)
{
  SetConsoleOutputCP(CP_UTF8);
    float pequena, media, grande, valor_arrecadado;
    int qtd_pequena, qtd_media, qtd_grande;

    printf("Digite o valor da caniseta pequena: ");
        scanf("%f", &pequena);
    printf("Digite o valor da caniseta média: ");
        scanf("%f", &media);
    printf("Digite o valor da caniseta grande: ");
        scanf("%f", &grande);

    
    printf("Digite a quantidade de camisetas pequenas vendidas: ");
        scanf("%d", &qtd_pequena);
    
    printf("Digite a quantidade de camisetas médias vendidas: ");
        scanf("%d", &qtd_media);
    
    printf("Digite a quantidade de camisetas grandes vendidas: ");
        scanf("%d", &qtd_grande);
    
    valor_arrecadado = (pequena * qtd_pequena) + (media * qtd_media) + (grande * qtd_grande);
    
    printf("O valor total das vendas é de R$ %.2f.\n", valor_arrecadado);
    
    return 0;
} // fim do programa;