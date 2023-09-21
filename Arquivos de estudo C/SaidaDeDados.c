#include <stdio.h>
#include <string.h>

int main() {

	int idade;
	double salario;
	char sexo;
	char nome[50];

	strcpy(nome, "Thesly Silva");
	idade = 21;
	sexo = 'M';
	salario = 400.50;

	printf("%s\n", nome);
	printf("%i\n", idade);
	printf("%c\n", sexo);
	printf("%.2lf", salario);

}