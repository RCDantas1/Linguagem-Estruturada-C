/* 6. Faça um programa para ler 3 notas de uma aluno, calcular a média e verificar se ele 
foi aprovado (média>=7) ou reprovado (média<7). */


#include <stdio.h>
//  #include <windows.h>

int main(void)
{
  //  SetConsoleOutputCP(CP_UTF8);

	float n1, n2, n3, media;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
	printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    
    media = (n1 + n2 + n3) / 3;
    
    if(media >= 7)
    printf("Média: %.2f. Aprovado.\n", media);
    else
    printf("Média: %.2f. Reprovado.\n", media);

  return 0;
}  // fim do programa
