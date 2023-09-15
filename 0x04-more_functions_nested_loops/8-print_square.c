#include "main.h"

/**
 * print_square - printing square using #
 *
 * @size: size of the square.
 *
 * Return: return 0.
 */
void print_square(int size)
{
	int i, x;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (x = 0; x < size; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
