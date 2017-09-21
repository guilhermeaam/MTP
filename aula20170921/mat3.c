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
	float r,b,n;
	safeFlush;
	printf("Digite o numero\n");
	scanf("%f",&n);
	printf("Digite a base\n");
	scanf("%f",&b);
	r=(log(n)/log(b));
	printf("%f",r);
	return 0;
}

