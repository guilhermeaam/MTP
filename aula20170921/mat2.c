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
	float a,b,c,ang;
	safeFlush;
	printf("Digite o b\n");
	scanf("%f",&b);
	printf("Digite o c\n");
	scanf("%f",&c);
	printf("Digite o angulo\n");
	scanf("%f",&ang);
	a=sqrt(pow(b,2)+pow(c,2)-(2*b*c*cos(ang)));
	printf("%f",a);
	return 0;
}

