#include <stdio.h>

int main() {

	double a,b,c,delta;
	double x,x1,x2;

	printf("Coeficiente a : ");
	scanf("%lf", &a);

	printf("Coeficiente b : ");
	scanf("%lf", &b);

	printf("Coeficiente c : ");
	scanf("%lf", &c);

	delta = pow(b, 2.0)-4.0*a*c;

	if(a == 0 || delta < 0) {

		printf("\nESTA EQUACAO NAO POSSUI RAIZES REAIS!");

	}else {

		x1 = (double)(+(-b)+sqrt(delta))/(2*a);
		x2 = (double)(+(-b)-sqrt(delta))/(2*a);

		printf("\nRESULTADO :\n");
		printf("\nX1 = %.4lf", x1);
		printf("\nx2 = %.4lf", x2);

	}
	return 0;
}