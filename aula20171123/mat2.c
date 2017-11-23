#include<stdio.h>
#include<stdlib.h>
#include "matriz.h"

int main(){
    Matriz A;
    int ordem;
    printf("Entre com a ordem da Matriz\n");
    scanf("%d", &ordem);
    A = criarMatriz(ordem, ordem);
    preencherMatriz(A);
    printf("\nDeterminante= %lg\n", determinante(A));
    destruirMatriz(A);
    return 0;
}
