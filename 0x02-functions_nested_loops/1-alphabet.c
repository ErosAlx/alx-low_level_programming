#include "main.h"

/**
 * print_alphabet - from a to z using _putchar function
 *
*/

void print_alphabet(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
