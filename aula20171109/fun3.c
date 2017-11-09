#include <stdio.h>
#include<stdlib.h>

int verifica(int vetA[], int tamA, int vetB[], int tamB){
    int i, j;
    for (i = 0 ; i < tamA ; i ++)
        for(j = 0; j < tamB ; j++)
            if (vetA[i] == vetB[j])
            printf("%d, ", vetA[i]);
}

int main(){
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int n = sizeof(A)/sizeof(int);
    int B[] = {1, 2, 3, 4, 5, 6, 8, 10, 12, 7, 29};
    int m = sizeof(B)/sizeof(int);
    verifica(A, n, B, m);
    return EXIT_SUCCESS;
}
