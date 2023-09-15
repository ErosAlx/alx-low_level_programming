#include "main.h"

/**
 * print_square - printing square using #
 *
 * @size: size of the square
 *
 * Return: return 0 
*/

void print_square(int size)
{
	int i, x;

	for (i = 1; i <= size; i++)
	{
		for (x = 1; x <= size; x++)
			_putchar('#');
		_putchar('\n');
	}
}
