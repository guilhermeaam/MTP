#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main ()
{
	srand(time(0));
	int a, n, f=0, r, x, x1;
	printf("Digite um dos divisores de 8192 ");
	scanf("%d",&n);
	if(n!=0)
	{
	if (8192%n==0 )
		f=f+1;
	else
	{
		f=f+0;
	}
    }
	x=1328 + (rand()%33);
	printf("Some 101 com o valor %d ", x);
	scanf("%d",&r);
	if (r==x+101)
		f=f+1;
	else
	{
		f=f+0;
	}
	x1=(rand()%100);
	printf("Multiplique por 3 o valor %d ", x1);
    scanf("%d",&a); 
    if (a==x1*3)
    	f=f+1;
    else
    {
    	f=f+0;
    }
    printf("%d ",f);	
    printf("pontos\n");
    return 0;
}
