#include <stdio.h>
float main ()
{
	float a, b, c, d, e, m;
	do{
	printf("Digite as notas do aluno entre 0 e 10 ");
	printf("Digite a nota A do aluno ");
		scanf("%f",&a);
	printf("Digite a nota B do aluno ");
	scanf("%f",&b);
	printf("Digite a nota C do aluno ");
	scanf("%f",&c);
	printf("Digite a nota D do aluno ");
	scanf("%f",&d);
	printf("Digite a nota E do aluno ");
	scanf("%f",&e);
}while (a<0||a>10||b<0||b>10||c<0||c>10||d<0||d>10||e<0||e>10);
	m=(a*2+b*2+c*2+d*3+e*5)/14;
	printf("a media e: %f",m);
	return 0;	
}