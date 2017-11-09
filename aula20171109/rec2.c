#include <stdio.h>
void reverter(char * str) {
    if(*str) {
        reverter(str+1);
        printf("%c",*str);
    }
}

int main() {
    char str[256];
    printf("Informe uma frase para ver sua inversa: \n");
    fgets(str,256,stdin);
    reverter(str);
    return 0;
}
