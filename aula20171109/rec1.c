#include <stdio.h>
#include<stdlib.h>

int soma(int * pvetA, int * ptamA){
    if (*ptamA){
        (*ptamA)--;
        return *pvetA + soma(pvetA + 1, ptamA);
    }
    else
        return 0.0;
}

int main(){
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int N = sizeof(A)/sizeof(int);
    printf("%d", soma(A,&N));
    return EXIT_SUCCESS;
}
