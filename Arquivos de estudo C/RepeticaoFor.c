#include <stdio.h>

int main(){
	
	int i,n,num;
	int soma=0;
	
	printf("Quantos numeros serao digitados? ");
	scanf("%i", &n);
	
	for(i=0;i<n;i++){
		
		printf("Digite um numero : ");
		scanf("%i", &num);
		
		soma= soma + num;
		
	}
	printf("%i",soma);
    
    return 0;
}