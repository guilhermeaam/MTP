#include <stdio.h>
#include <stdlib.h>
#define N 10
#define KANO0 3 
#define KANO1 5 
#define KANO2 4 
#define KCUR0 3 
#define KCUR1 4
#define KCUR2 2 
#define KNUM0 4 
#define KNUM1 8 
#define KNUM2 4

float media_de_aleatorios(int ID) {
	int * p = (int *) malloc(N*sizeof(int));
	int i;
	float media = 0;
	for(i = 0; i < N; i++) {
		p[i] = rand()%9 + 1;
		media += p[i];
	}
	free(p);
	return media;
}

int main() {
	int ID0 = (KANO0+KANO1+KANO2)%9 + 1,
        ID1 = (KCUR0+KCUR1+KCUR2)%9 + 1,
        ID2 = (KNUM0+KNUM1+KNUM2)%9 + 1;
    srand(ID0*100+ID1*10+ID2);
    printf("1o: %f\n", media_de_aleatorios(ID0)/3);
    printf("2o: %f\n", media_de_aleatorios(ID1)/3);
    printf("3o: %f\n", media_de_aleatorios(ID2)/3);
	return EXIT_SUCCESS;
}
