#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 * using _putchar function
 *
 * Return: return 0.
 */

void print_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
