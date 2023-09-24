#include <stdio.h>

int main() {

    int i,n;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    getchar();

    char nomes[n][50];
    int idades [n];
    double alturas [n];
    double x=0;
    double somaAlturas=0;

    for(i=0; i<n; i++) {

        printf("\nDigite os dados da %d° pessoa :",i+1);

        printf("\nNome = ");
        fgets(nomes[i],50,stdin);

        printf("Idade = ");
        scanf("%d",&idades[i]);

        printf("Altura = ");
        scanf("%lf", &alturas[i]);
        somaAlturas= somaAlturas+ alturas[i];

        if(idades[i]<16) {
            x++;
        }

        getchar();

    }
    double p= (x*100.0)/n;

    double mediaAlturas=(double) somaAlturas/n;

    printf("\nAltura media = %.2lf",mediaAlturas);
    printf("\nPessoas com menos de 16 anos = %.1lf%",p);
    printf("\nQuem sao = ");
    for(i=0; i<n; i++) {
        if(idades[i]<16) {
            printf("%s ",nomes[i]);
        }
    }
    return 0;
}