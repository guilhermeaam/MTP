#include <stdio.h>
int main(){
    int N=16,i;
    char str[N];
    int * varredura = (int *) str;
    for(i=0; i < N; i++)
        str[i] = '\0';
    printf("Entre com texto (%d carac):\n", N-1);
    fgets(str, N, stdin);
    printf("\nCodigo:");
    for(i = 0; i < N/sizeof(int); i++) printf("%d ", varredura[i]);
    printf("\nHex:");
	for(i = 0; i < N/sizeof(int); i++)
       printf("%X ",varredura[i]);
    printf("\n");
    return 0;
}
