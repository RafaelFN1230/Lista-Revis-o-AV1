/*
6 - Faça um programa que receba 10 idades, alturas e pesos e que mostre:
●A idade média do grupo.
●A quantidade de pessoas com peso superior a 90kg e altura inferior a 1,70.
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
	int cont;
	int idade;
	float altura;
	int peso;
	float media;
	int soma;
	
	soma=0;
	
	for(cont=1;cont<=3;cont++)
	{
		printf("Insira idade: \n");
		scanf("%d",&idade);
		printf("Insira altura: \n");
		scanf("%f",&altura);
		printf("Insira peso: \n");
		scanf("%d",&peso);
		media=media+idade;
		if((peso>90)&&(altura<1.70))
		{
			soma+=1;
		}	
	}
	media/=10;
	printf("Idade media do grupo: %.2f",media);
	printf("Pessoas com peso superior a 90kg e altura inferior a 1,70: %d",soma);
}