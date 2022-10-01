/*
4 - Implemente um código em C onde o usuário deve escolher uma opção desejada e após a escolha, imprimir as seguintes mensagens:
Caso escolha opção 1, deve imprimir: Parabéns, você ganhou 10% de desconto;
Caso escolha opção 2, deve imprimir: Parabéns, você ganhou 15% de desconto;
Caso escolha opção 3, deve imprimir: Parabéns, você ganhou 20% de desconto;
Caso escolha opção 4, deve imprimir: Parabéns, você ganhou 25% de desconto;
*/

#include<stdio.h>
#include<stdlib.h>

main()
{
	int opcao;
	
	printf("Escolha uma opcao de 1 a 4: \n");
	scanf("%d",&opcao);
	
	switch (opcao)
	{
		case 1:
			printf("Parabens, voce ganhou 10%% de desconto;");//"%%"imprime "%"
		break;
		
		case 2:
			printf("Parabens, voce ganhou 15%% de desconto;");
		break;
		
		case 3:
			printf("Parabens, voce ganhou 20%% de desconto;");
		break;
		
		case 4:
			printf("Parabens, voce ganhou 25%% de desconto;");
		break;	
	}
}