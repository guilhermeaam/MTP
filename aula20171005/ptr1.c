#include<stdio.h>
#include <stdlib.h>
int main(){
    unsigned int a = 0xFACA8421;
    unsigned char * p;
    int i;
    printf("Endereco.: %p; dado em decimal (unsigned): %u\n", &a, a);
    p = (unsigned char *) &a;
    for (i = 0; i < sizeof(a); i++)
        printf("Endereco.: %p => %d (decimal), %X(hexadecimal)\n", p+i, *(p+i),p[i]);
    return 0;
}
