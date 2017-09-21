#include <stdio.h>
#include <stdlib.h>
int main(){
	int i ,x, aux=0;
	printf("Digite um numero para descobrir se e perfeito\n");
	scanf("%d",&x);
	for( i=1;i<x;i++)
	{
		if(x%i==0){
		aux= i+aux;
		}
	}
	if(x==aux){
	printf("O numero e perfeito\n");	
	}
	else
	printf("O numero nao e perfeito\n");
	
	return 0;
}
