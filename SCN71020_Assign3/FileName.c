#include <stdio.h>

const char* result(const char* player1, const char* player2);

int main(void)
{





	return 0;
}

const char* result(const char* player1, const char* player2)
{
	char* Final;

	if (player1 == player2)
	{
		Final = "Draw";
	}
	else if (player1 == "Rock" && player2 == "Paper")
	{
		Final = "Player2";
	}
	else if (player1 == "Rock" && player2 == "Scissors")
	{
		Final = "Player1";
	}
	else if (player1 == "Scissors" && player2 == "Paper")
	{
		Final = "Player1";
	}
	else if (player1 == "Scissors" && player2 == "Rock")
	{
		Final = "Player2";
	}
	else if (player1 == "Paper" && player2 == "Scissors")
	{
		Final = "Player2";
	}
	else if (player1 == "Paper" && player2 == "Rock")
	{
		Final = "Player1";
	}
	else
	{
		Final = "Invalid";
	}

	return Final;
}
