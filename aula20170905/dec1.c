#include <stdio.h>
float main ()
{
	int n;
	printf("Digite um numero ");
	scanf("%d",&n);
	if (n%2==0)
	printf("par ");
	else 
	printf("O numero e impar ");
	if (n%3==0)
	printf("mult.3 ");
	if (n%5==0)
	printf("mult.5: ");
	if (n%7==0)
	printf("mult.7 ");	
	return 0;
}