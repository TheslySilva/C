#include <stdio.h>
#include <string.h>

int main() {

	char nome1[50];
	double idade1;

	char nome2[50];
	double idade2;

	double media;

	//Primera Pessoa

	printf("Dados da primeira pessoa :\n");

	printf("Nome : ");
	fgets(nome1, 50, stdin);

	printf("Idade : ");
	scanf("%lf", &idade1);

	getchar();

	//Segunda Pessoa

	printf("Dados da primeira pessoa :\n");

	printf("Nome : ");
	fgets(nome2, 50, stdin);

	printf("Idade : ");
	scanf("%lf", &idade2);

	//Resultado

	media = (idade1+idade2)/2;
	printf("\nA idade media entre %s e %s é de %.1lf anos", nome1, nome2, media);

	return 0;
}