#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int v, p,i=0,j=0, x,y,a;
	printf("Entre com o numero de poligonos: ");
	scanf("%d", &p);
	while (i<p){
	printf("Entre com o numero de vertices do poligono %d: ",i+1);
	scanf("%d", &v);
	while(j<v){
	printf("Entre com o x do %d vertice: ",j+1);
	scanf("%d", &x);
	printf("Entre com o y do %d vertice: ",j+1);
	scanf("%d", &y);
	j++;
	printf("A area do poligono %d: ",i+1);
	printf("%d: ",a);
	}
	j=0;
	i++;
	}
	return 0;
	}
