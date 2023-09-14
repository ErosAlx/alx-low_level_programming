#include "main.h"

/**
 * print_line - function that draws a diagonal line on the terminal.
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
		_putchar('\');
		i++;
	}
	_putchar('\n');
}
