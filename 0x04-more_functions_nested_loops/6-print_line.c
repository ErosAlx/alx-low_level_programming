#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: number of times _ character should be printed
 *
 * Return: return 0.
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
