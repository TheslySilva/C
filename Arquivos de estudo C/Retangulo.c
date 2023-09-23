#include <stdio.h>
#include <math.h>

int main(){
	
	double base,altura,area,perimetro,diagonal;
	double valor1,valor2;
	
	printf("Base do Retangulo : ");
	scanf("%lf", &base);
	printf("Altura do Retangulo : ");
	scanf("%lf",&altura);
	
	
	area= base*altura;
	
	perimetro= 2*(base+altura);
	
	valor1= pow(base,2);
	valor2= pow(altura,2);
	
	diagonal= sqrt(valor1+valor2);
	
	printf("\nAREA = %.4lf",area);
	printf("\nPERIMETRO = %.4lf",perimetro);
	printf("\nDIAGONAL = %.4lf",diagonal);
	
	return 0;
}