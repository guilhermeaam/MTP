#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <complex.h>
void safeFlush(){
	char c;
	while((c = getchar()) != EOF && c != '\n');
}
int main(){
	float r,i;
	double complex z, rf;
	safeFlush;
	printf("Digite a parte real do primeiro numero\n");
	scanf("%f",&r);
	printf("Digite a parte imaginaria do primeiro numero\n");
	scanf("%f",&i);
	z = r + i * I;
	rf= (conj(z)*z);
	printf("%lf + %lf*I\n",creal(rf),cimag(rf));
	return 0;
}
