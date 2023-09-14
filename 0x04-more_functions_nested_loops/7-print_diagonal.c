#include "main.h"

/**
 * print_diagonal - function print a diagonal line.
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
			_putchar(92);
			_putchar('\n');
			x++;
		}
	}
}
