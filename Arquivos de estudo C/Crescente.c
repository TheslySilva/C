#include <stdio.h>

int main() {

    int n1,n2;

    n1=0;
    n2=0;

    do {

        printf("Digite um numero : ");
        scanf("%d",&n1);
        printf("Digite outro numero : ");
        scanf("%d",&n2);

        if(n1<n2) {
        	
            printf("\nCRESCENTE!\n");
        } else if(n1>n2) {
        	
            printf("\nDECRESCENTE!\n");
        } else {
        	
            printf("\nIGUAIS\n");
        }
    } while(n1!=n2);

    return 0;
}