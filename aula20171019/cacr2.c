#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int delta (int a, int b, int c){
	int delta;
	delta=(b*b)-(4*(a*c));
	return delta;
}
void raizes(int x, int a, int b){
	float raiz1,raiz2;
	if (x>0){
 		raiz1=((-b)+sqrt(x))/(2*a);
 		raiz2=((-b)-sqrt(x))/(2*a);
		printf(" %f//%f\n",raiz1,raiz2);
 	}
 	if (x==0){
 		raiz1=(-b)/(2*a);
 		raiz2=(-b)/(2*a);
		printf(" %f//%f\n",raiz1,raiz2);
 	}
 	if (x<0){
 		printf("NAN,NAN\n");
 	}
 }
void main(){
	float a,b,c,raiz1,raiz2,x;
	printf("Digite um numero para substituir a, b e c, na operacao (y = ax*x + bx + c). \n");
	scanf("%f %f %f", &a, &b, &c);
	x=delta(a,b,c);
 	raizes(x,a,b);
}

