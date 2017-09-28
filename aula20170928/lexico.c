#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(){
	int i, j, pos=0, l=5, n=256;
	char palavra[l][n];
	char ordem[l][n];
	for (i=0;i<l;i++)
	{
		printf("Informe a palavra %d; ", i+1);
		fgets(palavra[i],n,stdin); palavra[i][strlen(palavra[i])-1]='\0';
	}
	for (i = 0; i < l; i++) 
        for(j = 0 ; j <n; j++)
        palavra[i][j] = tolower(palavra[i][j]);
	for (i=0;i<l;i++){
		pos=0;
		for(j=0;j<l;j++)
			if(strcmp(palavra[i],palavra[j])==1)
			pos++;
		strcpy(ordem[pos],palavra[i]);
	}
	for(i = 0; i < l; i++)
    printf("\n------------------\n%s", ordem[i]);
    printf("\n------------------\n");
	return 0;
}

