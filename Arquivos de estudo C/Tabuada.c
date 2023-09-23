#include <stdio.h>

int main(){
	
	int i,n,resultado;
	
	printf("Qual tabuada voce vai querer? ");
	scanf("%d",&n);
    
	for(i=0;i<=10;i++){
		resultado= n*i;
		printf("\n%d x %d = %d",n,i,resultado);
	}
	
	return 0;
}