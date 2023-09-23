#include <stdio.h>

int main() {

    int i,x,n,soma;
    double media;
    int vetor[10];

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d",&n);

printf("\n");
    soma=0;

    for(i=0; i<n; i++) {

        printf("Digite o elemento [%d] = ",i);
        scanf("%d", &vetor[i]);
        soma= soma+ vetor[i];
    }
    media=(double) soma/n;
    printf("\nVALORES = ");

    for(i=0; i<n; i++) {
        printf("%d ",vetor[i]);
    }
    printf("\nSOMA = %d",soma);
    printf("\nMEDIA = %.2lf",media);
    return 0;
}