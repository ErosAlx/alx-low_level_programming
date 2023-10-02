#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints the minimum number of coins
 *        to make change for an amount of money.
 *
 * @argv: pointer takes argument value.
 * @argc: int counter of argv.
 *
 * Return: returns 0.
*/

int main(int argc, char *argv[])
{
	int cents, coins_number = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
				cents = cents - 25;
			else if (cents >= 10)
				cents = cents - 10;
			else if (cents >= 5)
				cents = cents - 5;
			else if (cents >= 2)
				cents = cents - 2;
			else if (cents >= 1)
				cents = cents - 1;
			coins_number = coins_number + 1;
		}
	}
	printf("%d\n", coins_number);
	return (0);
}
