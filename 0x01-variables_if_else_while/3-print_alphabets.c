#include <stdio.h>

/**
 * main - entry point
 *
 * Description: program that prints the alphabet in lowercase then uppercase.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char i, n;

	i = 'a';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	n = 'A';
	while (n <= 'Z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
