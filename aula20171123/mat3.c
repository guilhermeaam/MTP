#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main(){
    Matriz A, I;
    int ordem;
    printf("Entre com a ordem da Matriz\n");
    scanf("%d", &ordem);
    A = criarMatriz(ordem, ordem);
    preencherMatriz(A);
    I = inversa(A);
    if (vazia(I) == 1)
        printf("\nNao inversivel");
    else
        imprimirMatriz(I);
    destruirMatriz(A);
    destruirMatriz(I);
    return 0;
}
