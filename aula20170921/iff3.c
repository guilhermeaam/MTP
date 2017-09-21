#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <inttypes.h>
#include <math.h>
#include <float.h>
#include <time.h>

void safeFlush(){
	char c;
	while((c = getchar()) != EOF && c != '\n');
}
int main(){
	int n, i;
	double f=1;
	safeFlush;
	printf("Digite um numero para se achar o fatorial\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	f*=(n-i);
	printf("Resultado ");
	printf("%lf\n", f);
	return 0;
}
