#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Biblioteca acentuação
#include <locale.h>


int main () {

	setlocale(LC_ALL, "Portuguese-Brasil");

	printf("\n");
	printf("****************************************\n");
	printf("* Bem vindo ao nosso jogo de advinhação *\n");
	printf("****************************************\n\n");

	int segundos = time (0);
	srand(segundos);

	int numerogrande = rand();

	int numerosecreto = numerogrande % 100;
	int chute;
	int tentativas = 0;
	double pontos = 1000;

	int acertou = 0;

	int nivel;
	printf("Qual o nível de dificuldade?\n");
	printf("(1) Fácil || (2) Médio || (3) Difícil \n\n");
	printf("Escolha: ");
	scanf("%d", &nivel);

	int numerodetentativas;

	switch(nivel) {

		case 1: 
			numerodetentativas = 20;
			break;

		case 2: 
			numerodetentativas = 15;
			break;

		default: 
			numerodetentativas = 6;
			break;
	}

	for (int i = 1; i <= numerodetentativas; i++)
	{
		printf("Tentativa %d = ", tentativas+1);
		printf("Qual é o seu chute?\n");

		scanf("%d", &chute);
		printf("Seu chute foi %d. \n", chute);

		if (chute < 0)
		{
			printf("Parece que você digitou um número inválido, tente novamente!\n");

			continue;
		}

		acertou = (chute == numerosecreto);	 
		int maior = chute > numerosecreto;	

		if (acertou)
		{
			break;
		}

		else if (maior)
		{
			printf("Seu chute foi maior do que o número secreto. \n");
		}

		else 
		{
			printf("Seu chute foi menor do que o número secreto. \n");
		}
		
		tentativas++;

		double pontosperdidos = abs(chute - numerosecreto) / (double) 2;
		pontos = pontos - pontosperdidos;
	
	}	

		printf("Fim de jogo! \n");

		if (acertou)
		{
			printf("Você ganhou! \n");
			printf("Você acertou %d tentativas\n", tentativas);
			printf("Total de pontos: %.1f \n",pontos );
		}
		else
		{
			printf("Você perdeu! Tente de novo.\n");
		}

		printf("\n");
	

}