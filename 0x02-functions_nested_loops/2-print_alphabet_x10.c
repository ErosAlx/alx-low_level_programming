#include "main.h"

/**
 * void print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
*/

void print_alphabet_x10(void)
{
	int i = 0;
	int ch;

	while (i < 10)
	{
		ch = 'a';
		{
			while (ch <= 'z')
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
	i++;
	}
}

