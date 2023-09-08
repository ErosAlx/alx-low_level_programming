#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program prints alphabet in lowercase with putchar function.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	return (0);
}
