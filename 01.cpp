#include<stdio.h>
#include <stdlib.H>
/*
1 – Implemente um código capaz de ler as notas de um aluno (AV1 e AV2) e informar se ele está ou não aprovado na disciplina. 
Para isso, considere: 
Média >= 6 pontos = APROVADO. 
Média entre 4 e 5,9 = FINAL
Média menor que 4 pontos = REPROVADO. 
Para cada uma das situações, imprima uma mensagem na tela para que o aluno fique ciente.
*/
main(){
	float av1;
	float av2;
	float media;
	
	printf("Insira a media AV1: \n");
	scanf("%f",&av1);
	printf("Insira a media AV2: \n");
	scanf("%f",&av2);
	media=(av1+av2)/2;
	
	if (media>=6)
	{
		printf("APROVADO");
	}	
	if ((media>=4)&&(media<5.9))
	{
		printf("FINAL");
	}
	if (media<4)
	{
		printf("REPROVADO");
	}
}