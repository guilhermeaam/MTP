#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float media (float * numeros, int qtde){
    float m = 0.0f;
    int i;
    for (i = 0; i <qtde ; i++) m += numeros[i];
    m /= qtde;
    return m;
}
double desviopadrao (float * numeros, int qtde){
    float m = media(numeros,qtde);
    double dp = 0.0f;
    int i;
    for (i = 0; i < qtde ; i++) dp += pow(numeros[i]-m,2);
    dp /= qtde - 1;
    return sqrt(dp);
}
int main(){
    int qtde, i;
    float * numeros;
    printf("Quantos numeros voce precisa? \n");
    scanf("%d", &qtde);
    numeros = (float *) malloc(qtde*sizeof(float));
    for(i = 0; i < qtde; i++){
        printf("Entre com o %d numero: ", i+1);
        scanf("%f", numeros+i);
    }
    printf("A media dos numeros e: %f\n", media(numeros, qtde));
    printf("O desvio padrao dos numeros e: %f\n", desviopadrao(numeros, qtde));
    free(numeros);
    return EXIT_SUCCESS;
}
