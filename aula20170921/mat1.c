#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
void safeFlush(){
	char c;
	while((c = getchar()) != EOF && c != '\n');
}
int main(){
	float x1,x2,y1,y2,d,a,b,c;
	safeFlush;
	printf("Digite o x1\n");
	scanf("%f",&x1);
	printf("Digite o y1\n");
	scanf("%f",&y1);
	printf("Digite o x2\n");
	scanf("%f",&x2);
	printf("Digite o y2\n");
	scanf("%f",&y2);
	a=x2-x1;
	b=2;
	c=y2-y1;
	d=sqrt((pow (a, b)) + (pow(c, b)));
	printf("%f",d);
	return 0;
}

