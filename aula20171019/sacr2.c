#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado() {
	return rand()%6 + 1;
}

int main() {
    srand(time(0));
    int chance = 1, i = 0, soma = 0;
    char c;
    printf("Aperte ENTER para iniciar o jogo e prosseguir as rodadas");
    do {
    scanf("%c", &c);
    printf("Rodada: %d\n", chance);
	for (i = 0, soma = 0; i < 6; i++){
     	printf("%d\n", dado());
     	soma = soma + dado();
	}
    printf("Soma dos dados nessa rodada: %d\n", soma);
	if (soma >= 18 && soma <= 23 ){
        chance = 3;
        printf("Voce venceu\n");
	}
	chance++;
    }while(chance <= 3);
    if (soma < 18 || soma > 23 )
    printf("\nVoce perdeu\n");
    return EXIT_SUCCESS;
}
