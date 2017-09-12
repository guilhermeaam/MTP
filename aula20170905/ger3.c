#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
int main ()
{
	srand(time(0));
	int d, d1 , d2, d3 ,l=0,r ,f,rodada=0;
	while(rodada<3){
	printf("Rodada %d\n",rodada+1);
	printf("Digite um limite: ");
	scanf("%d",&l);
		d1=1+(rand()%6);
		d2=1+(rand()%6);
		d3=1+(rand()%6);
	r=d1+d2+d3;
	if (l>11)
	{
		d=l-10;
		if(r>l)
		{
			f=f-d*(r-l);
		}
		else
		{
			f=f+(l-r)/d+1;
		}
	}
	else
	{
		f=f+(11-r);
	}
	rodada++;
	}
	
		printf("Pontos= %d",f);
	
	return 0;
}
	
