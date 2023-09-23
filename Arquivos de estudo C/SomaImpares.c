#include <stdio.h>

int main(){
	
	int i,soma,n1,n2,n3;
	
	printf("Digite dois numeros :\n");
	scanf("%d",&n1);
	scanf("%d",&n2);
	soma=0;
	
	if(n1>n2){
		n3=n1;
		n1=n2;
		n2=n3;
	}
	
	for(i=n1+1;i<=n2-1;i++){
		if(i%2 != 0){
			soma=soma+i;
		}
	}
	printf("SOMA DOS IMPARES = %d",soma);
	return 0;
}