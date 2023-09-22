#include <stdio.h>

int main () {

	int dia;

	printf("Que horas sao? ");
	scanf("%i", &dia);

	if(dia >= 6 && dia < 12) {

		printf("Bom dia!\n");

	}else if(dia >= 12 && dia < 18) {

		printf("Boa Tarde!\n");

	}else if(dia >= 18 && dia <= 23) {
		printf("Boa Noite!");
	}else {
		printf("Boa Madrugada!");
	};

	return 0;
}