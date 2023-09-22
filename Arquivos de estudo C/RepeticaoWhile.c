#include <stdio.h>

int main() {

    int x = 0;
    int i;
    int soma;

    printf("Digite um numero : ");
    scanf("%i", &i);

    soma =0;

    while(i != x) {
    
        soma= soma + i;
        printf("Digite outro numero : ");
        scanf("%i", &i);

    }

printf("%i",soma);

    return 0;
}