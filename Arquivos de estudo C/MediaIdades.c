#include <stdio.h>

int main(){
	
	int i;
	double idades,soma,resultado;
	soma=0;
	i=0;
	
	do{
		printf("Digite as idades : ");
		scanf("%lf", &idades);
        
		if(idades>0){
		soma=soma+ idades;
		i++;
        }
	}while(idades>0);
	
	resultado= soma/i;
	printf("MEDIA = %.2lf",resultado);
	
	return 0;
}