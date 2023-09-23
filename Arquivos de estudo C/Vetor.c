#include <stdio.h>

int main() {

    int i,n;

    printf("Quantos numeros vai digitar? ");
    scanf("%i", &n);

    int num[100];

    for(i=0 ; i<n ; i++) {

        printf("digite o elemento [%i] : ",i);
        scanf("%d",  &num[i]);
        getchar();

    }
    
    printf("\n");
    
    for(i=0;i<n;i++){
    
    printf("Elemento na posição [%d] = %d \n",i, num[i]);
    
    }
    return 0;
}