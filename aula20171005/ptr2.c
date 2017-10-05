#include <stdio.h>
#include <stdlib.h>
int main(){
    int v[] = {0,1,2,4,8,16,1025};
    unsigned char * p; 
    int nbytes = sizeof(v);
    int i, cont = 0;
    printf("Endereco. inicial de vetor: %p\n",v);
    for(i = 0, p = (unsigned char *) v; i < nbytes ; i++){
        if (!p[i]) cont++; 
        printf("Endereco.: %p, dado: %d, %X\n", p+i, *(p+i), p[i]);
    }
    printf("\nDe %d Bytes, %d estao com 0x00. \n", nbytes, cont);
    return 0;
}
