#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argv: pointer takes argument value.
 * @argc: int counter of argv.
 *
 * Return: returns 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{

	int i = 0, count;

	while (i < argc)
	{
		count = i;
		i++;
	}
	printf("%d\n", count);
	return (0);
}
