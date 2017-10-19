#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void desenho(int L, int C) {
    int pos = rand()%38; // 0 a 8
    int i, j;
    char caracteres[] = ": $ # $ : 4 b . ' :. : $ # $: 4b. ':.";
    for(i = 0; i < L; i ++){
        for(j = 0; j < C; j++){
            int pos = rand()%38;
            printf("%c", caracteres[pos]);
        }
    printf("\n");
    }
}
int main() {
    int C, L;
    printf("Informe o numero de Linha e depois o de Colunas do desenho\n");
    scanf("%d %d", &L , &C);
    desenho(L,C);
    return EXIT_SUCCESS;
}
