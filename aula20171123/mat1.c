#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main(){
	Matriz A, adjA;
	int ordem;
	printf("Entre com a ordem da Matriz \n");
	scanf("%d",&ordem);
	A = criarMatriz(ordem,ordem);
	preencherMatriz(A);
	adjA = adjunta(A);
	printf("\nAdjunta: \n");
	imprimirMatriz(adjA);
	destruirMatriz(A);
	destruirMatriz(adjA);
	return 0;
}
