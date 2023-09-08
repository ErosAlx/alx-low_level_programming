#include <stdio.h>

/**
 * main - entry point
 *
 * Description: C program print all the letters except q and e.
 *
 * Return: 0 (success)
*/

int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		if ((i == 'e') || (i == 'q'))
		{
			i++;
			continue;
		}
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
