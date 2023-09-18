#include "main.h"

/**
 * _puts - function printing a string followed
 * by a new line to stdout.
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
