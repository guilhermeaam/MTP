#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main(){
    Matriz A, I, B, R;
    int ordem;
    printf("Entre com a ordem do Sistema\n");
    scanf("%d", &ordem);
    A = criarMatriz(ordem, ordem);
    preencherMatriz(A);
    B = criarMatriz(ordem, 1);
    preencherMatriz(B);
    I = inversa(A);
    if (vazia(I) == 1)
        printf("Sistema impossivel ou indeterminado");
    else{
        R = multiplicaMat(I,B);
        imprimirSis(R);
    }
    destruirMatriz(A);
    destruirMatriz(B);
    destruirMatriz(I);
    destruirMatriz(R);
    return 0;
}
