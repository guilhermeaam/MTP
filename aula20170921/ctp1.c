#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void safeFlush(){
	char c;
	while((c = getchar()) != EOF && c != '\n');
}
int main(){
	char frase[250];
	safeFlush;
	printf("Digite uma frase\n");
	fgets(frase,250,stdin);
	for(int i=0; i<strlen(frase); i++){
		frase[i]=toupper(frase[i]);
	}
	printf("%s",frase);
	return 0;
}
