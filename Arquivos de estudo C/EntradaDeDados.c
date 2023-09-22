#include <stdio.h>
#include <string.h>

int main () {

	char nome[50];
	int idade;
	double altura;

	printf("Nome : ");
	fgets(nome, 50, stdin);

	printf("idade : ");
	scanf("%i", &idade);

	printf("Altura : ");
	scanf("%lf", &altura);

	printf("\n");

	printf("Nome : %s", nome);
	printf("Idade : %d\n", idade);
	printf("Altura : %.2lf\n", altura);

	return 0;
}