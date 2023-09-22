#include <stdio.h>

int main (){

	char nome[50];
	int idade;
	double altura;

	printf("Nome : ");
	scanf("%s", nome);

	printf("");

	printf("idade : ");
	scanf("%i", &idade);

	printf("");

	printf("Altura : ");
	scanf("%lf", &altura);
    
    return 0;
}