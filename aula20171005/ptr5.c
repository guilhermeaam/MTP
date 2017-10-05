#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int v[1000];
    unsigned char *p; 
    int num, i, cont = 0;
    printf("Informe um numero para verificacao: 0 a 255 \n");
    scanf("%d" , &num);
    p = (unsigned char *)v;
    for(i = 0;i < 1000; i++)
        v[i] = rand()%RAND_MAX;
    printf("Os bytes nos seguintes enderecos: \n");
    for(i = 0; i < 1000; i++)
        if(p[i] == num){
        	printf("%p => %d\n", p+i , num);
        	cont++;
        }
    printf("Esses %d bytes sao iguais a %d e estao localizados entre o endereco %p ate o endereco %p na memoria",cont, num, v, v+999);
    return 0;
}

