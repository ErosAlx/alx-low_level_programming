#include "main.h"

/**
 * puts2 - printing every other character of a string.
 *
 * @str: string takes input from other function.
 *
 * Return: return str.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
