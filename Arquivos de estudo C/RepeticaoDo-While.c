#include <stdio.h>

int main() {

    char res,m;
    double resuC,resuF;
    double c,f;

    do {
        
        printf("Vai valor em qual medida? [C | F ] ?");
        scanf("%c", &m);

        if(m=='F') {

            printf("Digite a temperatura em Fahrenheit : ");
            scanf("%lf", &f);

            resuC= (f-32)*5.0/9.0;

            printf("%.2lf\n",resuC);

        } else if(m=='C') {

            printf("Digite o valor em Celsius : ");
            scanf("%lf", &c);

            resuF= c* 9.0/5.0 + 32;
            printf("%.2lf\n", resuF);

        }
        printf("Deseja continuar ? [S | N] : ");
        scanf(" %c", &res);

        getchar();

    } while(res!='N');


    return 0;
}