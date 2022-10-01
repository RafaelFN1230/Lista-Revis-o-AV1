/*
2 - Faça um código que lê a idade de 15 pessoas e mostre a quantidade de pessoas que possui a idade entre 20 e 30 anos.
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int cont;
	int idade;
	int soma;
	
	soma=0;
	
	for (cont=1;cont<=15;cont++)
	{
		printf("Insira a idade da crianca: ");
		scanf("%d",&idade);
		if ((idade>=20)&&(idade<=30))
		{
			soma++;
		}
	}	
	printf("Existem %d, pessoas entre 20 e 30 anos.",soma);
}