#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned char * p1, * p2, * p3;
    int nbytes, i;
    float n1, n2, cont = 0;
    printf("Informe dois numeros: \n");
    scanf("%f%f", &n1, &n2);
    cont = n1 + n2;
    p1 = (unsigned char *) &n1;
    p2 = (unsigned char *) &n2;
    p3 = (unsigned char *) &cont;
    printf("\nEndereco do primeiro numero: %p, %.2f; \nEndereco do segundo numero: %p, %.2f; \nEndereco das soma dos numeros: %p, %.2f", p1, n1, p2, n2, p3, cont);
    return 0;
}


