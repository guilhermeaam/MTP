#include <stdio.h>
#include <time.h>
#include <string.h>

void colocar (int x, char * algo);
int main() {
    srand(time(0));
   	char nome_arquivo[256];
    char algo [256];
    int x;
    printf("Quantidade de numeros aleatorios: \n");
    printf("Obs: Os numeros gerados sao entre 0 e 100. \n");
    fscanf(stdin, "%d", &x);
    /*printf("Entre com arquivo [sem espacos]: ");
	scanf("%s", nome_arquivo);*/
	colocar (x, algo);
    return 0;
}
void colocar (int x, char * algo){
    int i;
    int y = 0;
    FILE * arquivo;
    arquivo = fopen("arquivo.txt", "wb");
    for (i=0; i<x; i++)
    {
        y = rand()%99+1;
        fprintf(arquivo, "%d\n", y);
    }
    fclose(arquivo);
}
