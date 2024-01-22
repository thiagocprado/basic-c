#include <stdio.h>	// biblioteca de entrada e saída prinft, scanf, etc.
#include <stdlib.h> // biblioteca de entrada e saída prinft, scanf, etc.
#include <time.h>

// define variáveis
// #define ATTEMPS 5

int main()
{
	// imprime cabeçalho
	printf("\n\n");
	printf("          P  /_\\  P                              \n");
	printf("		 /_\\_|_|_/_\\                            \n");
	printf("	 n_n | ||. .|| | n_n         Bem vindo ao     \n");
	printf("	 |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
	printf("	 |" "  |  |_|  |"  " |                        \n");
	printf("	 |_____| ' _ ' |_____|                        \n");
	printf("		   \\__|_|__/                             \n");
	printf("\n\n");

	int seconds = time(0);
	srand(seconds);

	int bigNumber = rand();

	int secretNumber = bigNumber % 100;
	int guess;
	double points = 1000;
	int gotItRight = 0;

	int level = 0;
	printf("Qual o nível de dificuldade?\n");
	printf("(1) Fácil (2) Médio (3) Difícil\n\n");
	printf("Escolha: ");
	scanf("%d", &level);

	int attemps;
	switch (level)
	{
	case 1:
		attemps = 20;
		break;
	case 2:
		attemps = 12;
		break;
	default:
		attemps = 6;
		break;
	}

	// while (1)
	for (int i = 1; i <= attemps; i++)
	{
		// printf("Tentativa %d de %d\n", i, ATTEMPS);
		printf("Tentativa %d \n", attemps + 1);
		printf("Qual o seu chute?");

		scanf("%d", &guess); // o 'd' significa que esperamos um número. O '&' só usamos no scanf
		printf("Seu chute foi %d \n", guess);

		if (guess < 0)
		{
			printf("Você não pode chutar numeros negativos");
			// i--;

			continue;
		}

		gotItRight = (guess == secretNumber);
		int bigger = guess > secretNumber;

		if (gotItRight)
		{
			// para a execução do for
			break;
		}
		else if (bigger)
		{
			printf("Seu chute foi maior que o numero secreto \n");
		}
		else
		{
			printf("Seu chute foi menor que o numero secreto \n");
		}

		// attemps++;
		// abs -> converte números negativos em positivos
		double lostPoints = abs(guess - secretNumber) / (double)2;
		points = points - lostPoints;
	}

	printf("Fim de Jogo! \n");
	if (gotItRight)
	{
		printf("\n\n");
		printf("                 OOOOOOOOOOO                \n");
		printf("		     OOOOOOOOOOOOOOOOOOO            \n");
		printf("	      OOOOOO  OOOOOOOOO  OOOOOO         \n");
		printf("	    OOOOOO      OOOOO      OOOOOO       \n");
		printf("	  OOOOOOOO  #   OOOOO  #   OOOOOOOO     \n");
		printf("	 OOOOOOOOOO    OOOOOOO    OOOOOOOOOO    \n");
		printf("	OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   \n");
		printf("	OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO   \n");
		printf("	OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
		printf("	 OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("	  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO     \n");
		printf("		OOOOO   OOOOOOOOOOOOOOO   OOOO      \n");
		printf("		  OOOOOO   OOOOOOOOO   OOOOOO       \n");
		printf("			 OOOOOO         OOOOOO          \n");
		printf("				 OOOOOOOOOOOO               \n");
		printf("\n\n");

		printf("Parabens! Voce acertou! Tente de novo! \n");
		printf("Você acertou em %d tentativas! \n", attemps);
		printf("Total de pontos: %.2f \n", points);
	}
	else
	{
		printf("Voce perdeu! Tente de novo! \n");
		printf("\n\n");

		printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");
	}
}

// O GCC é um compilador de linguagem C.
// O compilador é o responsável por transformar todo o código que escrevemos
// em linguagem C para código de máquina (afinal, o computador não entende a linguagem C diretamente).