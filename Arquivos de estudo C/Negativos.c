#include <stdio.h>

int main(){
	
	int i,n,soma;
	
	int vetor[10];
	
	printf("Quantos numeros voce vai digitar? ");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++){
		
		printf("Digite o elemento [%d] = ",i);
		scanf("%d", &vetor[i]);
		
	}
	printf("\n NUMEROS NEGATIVOS:\n");
	
	for(i=0;i<n;i++){
		
		if(vetor[i]<0){
			
			printf("\n%d",vetor[i]);
			
		}
	}
	return 0;
}