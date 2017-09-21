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
	float r,i,r2,i2,si,sr;
	safeFlush;
	printf("Digite a parte real do primeiro numero\n");
	scanf("%f",&r);
	printf("Digite a parte imaginaria do primeiro numero\n");
	scanf("%f",&i);
	printf("Digite a parte real do segundo numero\n");
	scanf("%f",&r2);
	printf("Digite a parte imaginaria\n");
	scanf("%f",&i2);
	si=i+i2;
	sr=r+r2;
	double complex z;
	z = sr + si * I;
	printf("%lf + %lf*I\n",creal(z),cimag(z));
	return 0;
}

