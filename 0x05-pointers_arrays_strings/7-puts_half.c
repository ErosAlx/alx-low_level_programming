#include "main.h"

/**
 * puts_half - printing half of a string.
 *
 * @str: string takes input from other function.
 *
 * Return: return str.
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i = i / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
