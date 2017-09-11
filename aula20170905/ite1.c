#include <stdio.h>
int main ()
{
	int n, f=1, i;
	printf("Digite um numero para se achar o fatorial\n");
    scanf("%d",&n);
	for (i=0;i<n;i++)
	f*=(n-i);
    printf("Resultado ");
    printf("%d\n", f);
    return 0;
}
