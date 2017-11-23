#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main(){
    Matriz A, B, C;
    int l, c;
    printf("Entre com a linha da primeira matriz\n");
    scanf("%d", &l);
    printf("Entre com a coluna da primeira matriz\n");
    scanf("%d", &c);
    A = criarMatriz(l, c);
    printf("Entre com a linha da segunda matriz\n");
    scanf("%d", &l);
    printf("Entre com a coluna da segunda matriz\n");
    scanf("%d", &c);
    B = criarMatriz(l, c);
    preencherMatriz(A);
    preencherMatriz(B);
    C = multiplicaMat(A,B);
    if (vazia(C) == 1)
        printf("\nnao e possivel");
    else
        imprimirMatriz(C);
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(C);
    return 0;
}

