#include <stdio.h>
#include <string.h>

int main () {

	char nome[50];
	int idade;
	double altura;

	printf("Nome : ");
	scanf("%s", nome);

	printf("idade : ");
	scanf("%i", &idade);

	printf("Altura : ");
	scanf("%lf", &altura);

	return 0;
}