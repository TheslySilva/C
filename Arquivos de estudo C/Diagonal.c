#include <stdio.h>

int main(){
	
	int x,y,n;
	printf("Digite a ordem da matriz : ");
	scanf("%d",&n);
	
	int matriz[n][n];
	
	for(x=0;x<n;x++){
		
		for(y=0;y<n;y++){
			printf("\nElemento [%d,%d] : ",x,y);
			scanf("%d", &matriz[x][y]);
			
		}
	}
	printf("\nDIAGONAL PRINCIPAL:\n");
	for(x=0;x<n;x++){
		
		printf("%d ",matriz[x][x]);
	}
	
	return 0;
}