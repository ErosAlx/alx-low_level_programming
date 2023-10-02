#include "main.h"

/**
 * _puts - printing a string.
 *
 * @str: string takes input from other function.
 *
 * Return: return str.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
