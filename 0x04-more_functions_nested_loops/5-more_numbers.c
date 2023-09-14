#include "main.h"

/**
 * print_most_numbers - function that prints the numbers,
 * from 0 to 14 10 times.
 *
 * Return: return 0.
 */

void more_numbers(void)
{
	int i;
	int n;
	int x = 0;

	while (x < 10)
	{
		i = 0;

		while (i <= 14)
		{
			n = i;
			if (i > 9)
			{
				_putchar('1');
				n = i % 10;
			}
			_putchar(n + 48);
			i++;
		}
		x++;
		_putchar('\n');
	}
}
