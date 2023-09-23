#include <stdio.h>

int main() {

	int n1,
	n2,
	n3,
	x;

	printf("Digite primeiro numero : ");
	scanf("%d", &n1);

	printf("Digite segundo numero : ");
	scanf("%d", &n2);

	printf("Digite terceiro numero : ");
	scanf("%d", &n3);

	if(n1 < n2 && n1 < n3) {

		printf("\nMenor Numero = %d", n1);

	}else if(n2 < n1 && n2 < n3) {

		printf("\nMenor Numero = %d", n2);

	}else if(n3 < n1 && n3 < n2) {

		printf("\nMenor Numero = %d", n3);

	}else {
		printf ("%d", n1);
	}

	return 0;
}