#include <stdio.h>

int main() {

    double largura,comprimento,metroQ,resultado,preco,precoF;

    printf("Digite a Largura do terreno : ");
    scanf("%lf", &largura);
    printf("Digite o Comprimento do terreno : ");
    scanf("%lf", &comprimento);
    printf("Digite o valor do Metro Quadrado : ");
    scanf("%lf", &preco);

metroQ = largura * comprimento;
precoF = metroQ * preco;

printf("\nArea do terreno = %.2lf",metroQ);
printf("\nPreco do terreno = %.2lf",precoF);
    return 0;
}