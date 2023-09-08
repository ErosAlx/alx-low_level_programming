#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program that prints digit numbers of base 10 starting from 0.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
