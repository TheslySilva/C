#include <stdio.h>
#include <string.h>

int main () {

//Variaveis
    char nome[50];
    int idade;
    double altura;

//Entrada padrao

    printf ("idade : " );
    scanf("%i", &idade);

//Limpa a entrada anterior

    getchar();

//Entrada para strings que possuem espaco

    printf("Nome : ");
    fgets(nome,50,stdin);

//Retira a quebra de linha da string

    strtok(nome, "\n");

//Saida

    printf("\n");

    printf("Nome : %s \n", nome);
    printf("Idade : %d",idade);
    
    return 0;
}