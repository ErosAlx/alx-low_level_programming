#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of triangle
 *
 * Return: return 0.
*/

void print_triangle(int size)
{
	int i, x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; x <= size; i++)
		{
			for (x = 1; x <= size; x++)
			{
				if ((i + x) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
