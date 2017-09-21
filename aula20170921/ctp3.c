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
	int i, f=0;
	safeFlush;
	printf("Digite uma frase\n");
	fgets(frase,250,stdin);
	for(i=0; i<strlen(frase); i++){
		if (isalpha(frase[i])){
			f++;}
	}
	printf("%d",f);
	return 0;
}

