#include <stdio.h>

int main(){
	
	double nota1,nota2,media;
	
	printf("Digite a primeira nota: ");
	scanf("%lg",&nota1);
	printf("Digite a segunda nota: ");
	scanf("%lg",&nota2);
	
	media= (nota1+nota2)/2;
	
	printf("\nMEDIA FINAL : %.1lf",media);
	
	if(media>=6){
		printf("\nAPROVADO!");
	}else{
		printf("\nREPROVADO!");
	}
	
	return 0;
}