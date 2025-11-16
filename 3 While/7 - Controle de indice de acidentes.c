/*7. Foi feita uma estatística em 5 cidades para coletar dados sobre acidentes de trânsito. 
Foram obtidos os seguintes dados: 
a) código da cidade; 
b) número de veículos de passeio; 
c) número de acidentes de trânsito com vítimas 
Deseja-se saber: 
-qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem; 
-qual a média de veículos nas 5 cidades juntas; 
-qual a média de acidentes nas 5 cidades juntas. */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");

    int veiculos, acidente, soma_acidentes = 0, soma_veiculos = 0, cont = 0, maior_acidente = 0, menor_acidente = 0;
    char codigo, codigo_maior, codigo_menor;
    float media;

    while (cont < 5){

        printf("Digite o código da cidade: ");
            scanf("%s", &codigo);

        printf("Digite o número de veículos de passeio: ");
            scanf("%d", &veiculos);

        printf("Digite o número de acidentes de trânsito com vítimas: ");
            scanf("%d", &acidente);

        if (cont == 0){
            maior_acidente = acidente;
            codigo_maior = codigo;
            menor_acidente = acidente;
            codigo_menor = codigo;
        }

        else {

            if (acidente > maior_acidente){
                maior_acidente = acidente;
                codigo_maior = codigo;
            }

            if (acidente < menor_acidente){
                menor_acidente = acidente;
                codigo_menor = codigo;
            }
        }

        soma_acidentes += acidente;
        soma_veiculos += veiculos;

        cont++;

    }

    printf("O maior número de acidentes foi de %d, registrado na cidade '%c'.\n", maior_acidente, codigo_maior);
    printf("O menor número de acidentes foi de %d, registrado na cidade '%c'.\n", menor_acidente, codigo_menor);
    printf("A média de veículos nas 5 cidades é %.2f.\n", (float) soma_veiculos / cont);
    printf("A média de acidentes nas 5 cidades é %.2f.\n", (float) soma_acidentes / cont);

return 0;
}
