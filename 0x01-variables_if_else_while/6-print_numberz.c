#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program that prints numbers from 0 to 9 using putchar.
 *
 * Return: 0 (success)
*/

int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
