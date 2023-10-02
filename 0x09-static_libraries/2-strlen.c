#include "main.h"

/**
 * _strlen - function return the length of a string.
 *
 * @s: string takes input from other function.
 *
 * Return: return length.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	return (length);
}
