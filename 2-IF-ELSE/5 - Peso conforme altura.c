
/*  5. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um 
programa que calcule seu peso ideal, utilizando as seguintes fórmulas: 
- para homens: (72.7*h)-58; - para mulheres: (62.1*h)-44.7   */


#include <stdio.h>
//  #include <windows.h>

int main(void)
{
  //  SetConsoleOutputCP(CP_UTF8);

	float altura, peso_ideal;
	char sexo;
    
    printf("Digite o sexo M (masculino) ou F (feminino): ");
    scanf("%c", &sexo);
    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    switch(sexo){
    case 'M':
        peso_ideal = (72.7 * altura) - 58;
        break;
    
    case 'F':
        peso_ideal = (62.1 * altura) - 44.7;
        break;
    }
    printf("O peso ideal é %.2f Kg.\n", peso_ideal);
   
    
  return 0;
} // fim do programa