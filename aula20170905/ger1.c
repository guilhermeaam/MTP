#include <stdio.h>
#include <stdlib.h>
int main(){
	int i ,x, aux=0;
	printf("Digite um numero para descobrir se e primo ou nao\n");
	scanf("%d",&x);
	for( i=2;i<x;i++)
	{
		if(x%i==0){
			aux++;
		}
	}
	if(aux!=0){
		printf("O numero nao e primo \n");
		
	}
	else 
	printf("O numero e primo\n");
	
	return 0;
}
