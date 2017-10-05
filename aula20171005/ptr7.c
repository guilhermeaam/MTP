#include <stdio.h>
int main(){
	int N=4;
    int v[N];
    void * varredura = (void *)v;
    int i = 0;
    for(; i < N; i++)
        v[i] = 0;
    for (i = 0; i < N ; i++){
        printf("Entre com o elemento %d:\n", i+1);
        scanf("%d", &v[i]);
    }
    printf("\nDado: %s", varredura);
    return 0;
}
