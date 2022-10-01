/*
5 - Faça um programa que leia a idade de 10 pessoas e informe quantas pessoas são maiores de idade.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int cont;
	int idade;
	int soma;
	
	soma=0;
	
	for (cont=1;cont<=10; cont++)
	{
		printf("Insira idade: \n");
		scanf("%d",&idade);
		if(idade>=18)
		{
			soma++;
		}
	}
	printf("%d sao maiores de idade.\n",soma);
}