#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 *
 * @n: number of times / character should be printed
 *
 * Return: return 0.
 */

void print_diagonal(int n)
{
	int i;
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 1;

		while (x <= n)
		{
			i = 1;

			while (i <= x)
			{
				_putchar(' ');
				i++;
			}
			x++;
			_putchar(92);
			_putchar('\n');
		}
	}
}
