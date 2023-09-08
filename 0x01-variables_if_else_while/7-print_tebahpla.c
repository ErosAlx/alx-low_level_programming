#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C that prints the lowercase alphabet in reverse.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
