#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
srand(time(0));
float pr;
int i, cont = 0;
printf("Entre com uma probabilidade entre 0 e 1\n");
scanf("%f", &pr);
for (i = 0; i < 1000; i++)
if (((float)rand()/(float)RAND_MAX) < pr)
cont++;
printf("Contagem em 1000: %d\n", cont);
return 0;
}
