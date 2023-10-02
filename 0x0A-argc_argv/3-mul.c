#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 *
 * @argv: pointer takes argument value.
 * @argc: int counter of argv.
 *
 * Return: returns 0.
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
