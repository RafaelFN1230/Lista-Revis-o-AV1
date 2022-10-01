/*
3
Faça um código que determine o maior entre N números. 
A condição de parada é a entrada de um valor 0 (zero), ou seja, o algoritmo deve ficar calculando o maior até que o número zero seja digitado.
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int a;
	int b;
	int contador;
	
	printf("Insira o primeiro numero: \n");
	scanf("%d",&a);
	printf("Insira o segundo numero: \n");
	scanf("%d",&b);
	
	while ((a!=0)&&(b!=0))
	{
		if (a>b)
		{
			printf("%d, eh o maior numero.\n",a);
			printf("Insira o proximo numero: \n");
			scanf("%d",&b);
		}
		if (a==b)
		{
			printf("%d, eh igual.\n",a);
			printf("Insira o proximo numero: \n");
			scanf("%d",&b);
		}
		if (a<b)
		{
			printf("%d, eh o maior numero.\n",b);
			printf("Insira o proximo numero: \n");
			scanf("%d",&a);
		}
	}
}