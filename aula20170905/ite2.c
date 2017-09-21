#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int n, r=1, i, e;
	printf("Digite um numero para ser a base \n");
    scanf("%d",&n);
    printf("Digite um numero para ser o expoente \n");
    scanf("%d",&e);
	for (i=0;i<e;i++)
	{
	r*=n;
	}
    printf("Resultado ");
    printf("%d\n", r);
    return 0;
}
