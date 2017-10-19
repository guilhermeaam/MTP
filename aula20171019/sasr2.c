#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main(){
	int x;
printf("Digite um numero entre 1 e 2. \n");
scanf("%d",&x);
if(x>=1&&x<=2){
if(x==1){
	printf("1, 3 ,5, 7, 9, 11, 13, 15, 17, 19 \n");
}
if(x==2){
	printf("2, 4, 6, 8, 10, 12, 14, 16, 18, 20 \n");
}
}
else{
	printf("Digite um numero entre 1 e 2 \n");
}
    return 0;
}
