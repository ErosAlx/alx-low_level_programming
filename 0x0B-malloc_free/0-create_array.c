#include "main.h"

/**
 * create_array - function that creates an array of chars
 * , and initializes it with a specific char.
 *
 * @size: unsigned int takes input from other function.
 * @c: caracter takes input from other function.
 *
 * Return: pointer to the array initialized or NULL;
 */

char *create_array(unsigned int size, char c)
{
	char *p = malloc(size * sizeof(char));

	if (size == 0 || p == 0)
	{
		return (0);
	}

	else
	{
		while (size--)
		{
			p[size] = c;
		}
		return (p);
	}
}
