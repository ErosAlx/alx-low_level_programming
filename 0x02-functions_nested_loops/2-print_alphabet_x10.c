#include "main.h"

/**
 * print_alphabet_x10 - function prints lowercase alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int ch;

	while (i < 10)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
	i++;
	}
}

