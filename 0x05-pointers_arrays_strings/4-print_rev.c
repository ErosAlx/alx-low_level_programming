#include "main.h"

/**
 * print_rev - printing a string, in reverse.
 *
 * @s: string takes input from other function.
 *
 * Return: return s.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
