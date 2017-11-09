#include <stdio.h>
#include<stdlib.h>

int somafracao(int num1, int den1, int num2, int den2, int *pnumR, int *pdenR){
    if(den1 == 0 || den2 == 0)
        return 0; 
    else{
        *pnumR = den2 * num1 + den1 * num2;
        *pdenR = den1 * den2;
        return 1;
    }
}
int MDC (int x, int y){
    if(x == y || y == 0)
        return x;
    else if (x == 0)
        return y;
    else if (x%2 == 0 && y%2 == 1)
        return MDC (x/2, y);
    else if (x%2 == 1 && y%2 == 0)
        return MDC (x, y/2);
    else if (x%2 == 0 && y%2 == 0)
        return 2 * MDC(x/2,y/2);
    else if (x > y)
        return MDC((x-y)/2, y);
    else
        return MDC ((y-x)/2, x);
}

int main(){
    int num1, den1, num2, den2, numR, denR, mdc;
    printf("Entre com um numero racional na forma 'num/den':  ");
    scanf("%d/%d", &num1, &den1);
    printf("Entre com outro numero racional na forma 'num/den':  ");
    scanf("%d/%d", &num2, &den2);
    if (somafracao(num1, den1, num2, den2, &numR, &denR))
        printf("%d/%d", (numR/MDC(numR, denR)), (denR/MDC(numR,denR)));
    else
        printf("Erro!\n");
    return EXIT_SUCCESS;
}
