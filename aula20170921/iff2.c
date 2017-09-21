#include<stdio.h>
#include<stdlib.h>
int main(){
int n, i;
float finver, somaf = 0;
double dinver, somad = 0;
printf("Infome um valor inteiro para o processo: ");
scanf("%d", &n);
finver = 1.f/n;
dinver = 1./n;
for(i = 0; i < 729 ; i++){
somaf += finver;
somad += dinver;
}
printf("Soma float: %.15f \nSoma double: %.15f", somaf,somad);
return 0;
}
