#include <stdio.h>

int main() {

    int l,c,i,x;

    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d",&l);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d",&c);
    
    printf("\n");
    
    int matriz[10][10];

    for(i=0; i<l; i++) {
        for(x=0; x<c; x++) {
            printf("Digite o valor do elemento [%d,%d] : ",i,x);
            scanf("%d", &matriz[i][x]);
            getchar();
        }
    }
    printf("\nNumeros presente na matriz :\n");

    for(i=0; i<l; i++) {
        for(x=0; x<c; x++) {
            printf("%d  ",matriz[i][x]);
        }
        printf("\n");
    }
    return 0;
}