#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 256

typedef
	struct conta {//define formato da conta
		char nome[256];
		char cpf[11];
		unsigned int idade;
		char usuario[256];
		char senha[256];
		char rg[N]; 
	}
Conta;


typedef
	struct extrato {//define formato do extrato
		float inseriu;
		int continseriu; 
		float saque;
		int contsaque;
		float saldo;
	}
Extrato;

void retirar(char rg[N]) {
	Extrato extrato;
	float saq;
	strcat(rg, ".txt");
	FILE * arq;
    arq = fopen(rg,"r+");
    if(arq==NULL){
    	printf("Nao foi possivel acessar essa conta verifique as informacoes.\n");
	}
	else
	{
	fscanf(arq, "%f\t%d\t%f\t%d\t%f\t", &extrato.inseriu,&extrato.continseriu,&extrato.saque,&extrato.contsaque,&extrato.saldo);
	fclose(arq);
	arq= fopen(rg,"w+");
	printf("Digite o valor que deseja sacar?\n");
	scanf("%f", &saq);	
	if(extrato.saldo<saq){
		printf("Voce nao tem esse valor pra sacar.\n");
		fclose(arq);
	}
	else
	extrato.contsaque=extrato.contsaque+1;
	extrato.saldo=extrato.saldo-saq;
    extrato.saque=extrato.saque+saq;
    fprintf(arq, "%f\t %d\t %f\t %d\t %f\t", extrato.inseriu,extrato.continseriu,extrato.saque,extrato.contsaque,extrato.saldo);
	fclose(arq);}
}

void criarextrato(char rg[N]){//criar extrato
	Extrato extrato;
	strcat(rg, ".txt");
	remove(rg);
	FILE * arq;
    arq = fopen(rg,"w");
   	fprintf(arq, "%f\t%d\t%f\t%d\t%f\t", 0.00,0,0.00,0,0.00);
	fscanf(arq, "%f\t%d\t%f\t%d\t%f\t", &extrato.inseriu,&extrato.continseriu,&extrato.saque,&extrato.contsaque,&extrato.saldo);
   	fclose(arq);
}


void deposito(char rg[N]) {//função deposito
	Extrato extrato;
	float dep, d, s, sald, saq;
	int c, conti;
	strcat(rg, ".txt");
	FILE * arq;
    arq = fopen(rg,"r");
    if(arq==NULL){
    	printf("Nao foi possivel acessar essa conta verifique as informacoes.\n");
	}
	else
	{
	fscanf(arq, "%f\t%d\t%f\t%d\t%f\t", &extrato.inseriu,&extrato.continseriu,&extrato.saque,&extrato.contsaque,&extrato.saldo);
	fclose(arq);
	arq= fopen(rg,"w+"); 
	printf("Digite o valor que deseja depositar?\n");
	scanf("%f", &dep);	

	extrato.continseriu=extrato.continseriu+1;
	extrato.saldo=extrato.saldo+dep;
    extrato.inseriu=extrato.inseriu+dep;
    fprintf(arq, "%f\t %d\t %f\t %d\t %f\t", extrato.inseriu,extrato.continseriu,extrato.saque,extrato.contsaque,extrato.saldo);   	
	fclose(arq);}
}

void mostrarextrato(char rg[N]){
	strcat(rg, ".txt");
	Extrato extrato;
	FILE * arq;
    arq = fopen(rg,"r+");
    if(arq==NULL){
    	printf("Nao foi possivel acessar essa conta verifique as informacoes.\n");
	}
	else
	{
	fscanf(arq, "%f\t%d\t%f\t%d\t%f\t", &extrato.inseriu,&extrato.continseriu,&extrato.saque,&extrato.contsaque,&extrato.saldo);
    printf("Depositou:%f (%d) vezes\n Sacou:%f (%d) vezes\n",extrato.inseriu,extrato.continseriu,extrato.saque,extrato.contsaque);
	fclose(arq);
}}

void mostrarsaldo(char rg[N]){//saldo
	Extrato extrato;
	strcat(rg, ".txt");
	FILE * arq;
    arq = fopen(rg,"r+");
    if(arq==NULL){
    	printf("Nao foi possivel acessar essa conta verifique as informacoes.\n");
	}
	else
	{
	fscanf(arq, "%f\t%d\t%f\t%d\t%f\t", &extrato.inseriu,&extrato.continseriu,&extrato.saque,&extrato.contsaque,&extrato.saldo);
	printf("Saldo:%f\n",extrato.saldo);
    fclose(arq);
}
}

void gravar(char cpf[11], Conta conta) {//parte da função criar conta
	strcat(cpf, ".txt");
	FILE * arq;
    arq = fopen(cpf,"w+");
	fwrite(&(conta.nome),256,1,arq);
	fwrite(&(conta.idade),sizeof(unsigned int),1,arq);
	fwrite(&(conta.cpf),11,1,arq);
	fwrite(&(conta.rg),20,1,arq);
	fwrite(&(conta.usuario),256,1,arq);
	fwrite(&(conta.senha),256,1,arq);
	fclose(arq);
}

int ler(FILE * arq, Conta * pconta, unsigned int id) {//parte da função mostrar
	fseek(arq,id*sizeof(Conta),SEEK_SET);
	int ok = fread(&(pconta->nome),256,1,arq);
	fread(&(pconta->idade),sizeof(unsigned int),1,arq);
	fread(&(pconta->cpf),11,1,arq);
	fread(&(pconta->rg),256,1,arq);
	fread(&(pconta->usuario),256,1,arq);
	fread(&(pconta->senha),256,1,arq);
	return ok;
}

void mostrar(Conta conta) {//parte da função mostrar
	printf("Nome:%s \n %u Anos\n Cpf: %s\n Rg:%s\n", conta.nome, conta.idade, conta.cpf, conta.rg);
}

void inicia() {//parte da função criar conta
	float i;
	char nome[256], cpf[11], rg[N], usuario[256], senha[256];
	remove("registro.txt");
	Conta conta;
	printf("Digite o nome\n");
	scanf("%s", nome);
	strncpy(conta.nome,nome, 256);
	printf("Digite a idade\n");
	scanf("%f", &i);	
	if(i>=18){
	conta.idade = i;
	printf("Digite o cpf\n");
	scanf("%s", cpf);
	strncpy(conta.cpf,cpf, 11);
	printf("Digite o rg\n");
	scanf("%s", rg);
	strncpy(conta.rg,rg, N);
	printf("Digite o usuario\n");
	scanf("%s", usuario);
	strncpy(conta.usuario,usuario, 256);
	printf("Digite a senha\n");
	scanf("%s", senha);
	strncpy(conta.senha,senha, 256);
	gravar(cpf,conta);
	criarextrato(rg);
	}
	else
	printf("Nao aceitamos pessoas com menos de 18 anos\n");
}

int main (){
	Conta conta;
	int n;
	char u, cpf[11], senha[256], rg[N];
	FILE * arq;
	unsigned int i;
	i = 0;
	do{
		printf("\nEscolha a opcao:\n1) Criar conta. \n2) Mostrar conta. \n3) Mostrar saldo. \n4) Inserir Dinheiro.\n5) Retirar dinheiro.\n6) Extrato.\n7) Remover conta.\n8) Sair.\n\n");
		scanf("%d",&n);
	  	switch ( n )
		{
     case 1 :
 		inicia();     
		 break;
 
     case 2 :
		printf("Digite o cpf\n");
		scanf("%s", cpf);
		strncpy(conta.cpf,cpf, 11);
		strcat(cpf, ".txt");
	    arq = fopen(cpf,"r");
	    if(arq==NULL){
    	printf("Nao foi possivel acessar essa conta verifique as informacoes.\n");
	}
	else
	{
		while(!feof(arq)) 
		if(ler(arq, &conta, i))
			mostrar(conta);
		i++;}
		fclose(arq);
		break;
 
     case 3 :
		printf("Digite o rg\n");
		scanf("%s", rg);
	    mostrarsaldo(rg);
     	break;
 
     case 4 :
		printf("Digite o rg\n");
		scanf("%s", rg);
	    deposito(rg);
		break;
 
     case 5 :
		printf("Digite o rg\n");
		scanf("%s", rg);
		retirar(rg);
		break;
 
     case 6 :
		printf("Digite o rg\n");
		scanf("%s", rg);
	    arq = fopen(rg,"r");
		mostrarextrato(rg);
		fclose(arq);     
		break;
 
     case 7 :
        //Remover conta
		printf("Digite o cpf\n");
		scanf("%s", cpf);
		strcat(cpf, ".txt");
    	remove(cpf);
    	printf("Digite o rg\n");
		scanf("%s", rg);
		strcat(rg, ".txt");
    	remove(rg);
     	break;
     	
      case 8: //sair
        break; 
    
     default :
       printf ("Opcao invalida!\n");
        
	
  }}
  while(n != 8);
  return 0;
  }

