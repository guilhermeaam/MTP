#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main ()
{
srand(time(0));
int x,y;
x= (rand()%100);
y= 101 + (rand()%192);
printf("Numero entre 101 e 293 =%d\n", y);
printf("Numero entre 0 e 99 =%d\n", x);
return 0;
}
