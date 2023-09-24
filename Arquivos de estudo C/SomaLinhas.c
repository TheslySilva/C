#include <stdio.h>

int main(){
	
	int x,i,y,l,c,soma;
	
	printf("Qual a quantidade de linhas? ");
	scanf("%d",&l);
	printf("\nQual a quantidade de colunas? ");
	scanf("%d",&c);
	
	int matriz[l][c];
	int vetor[l];
	
	soma=0;
	
	for(x=0;x<l;x++){
		printf("\nDigite os valores da %d linha :\n");
		for(y=0;y<c;y++){
			printf("Elemento [%d,%d] : ",x,y);
			scanf("%d",&matriz[x][y]);
			
			soma=soma + matriz[x][y];
            
		}
        vetor[x]= soma;
		soma=0;
	}
	printf("\nVetor gerado :");
	
	for(i=0;i<l;i++){
		printf("\n%d",vetor[i]);
	}
	
	return 0;
}