#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int i;
    char *str;
    str = (char *) malloc(1);
    printf("Bem vindo ao Notepad, para sair use '-' \n");
    for(i = 0;; i++){
    str = (char *) realloc(str, strlen(str)+1);
    str[i] = getchar();
    if(str[i] == '-')
        break;
    }
    for (i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
   printf("%s", str);
   free(str);
   return(0);
}
