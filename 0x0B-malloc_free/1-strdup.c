#include "main.h"

/**
 * _strdup - returning a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string takes input from other function.
 *
 * Return: return 0.
 */

char *_strdup(char *str)
{
	char *p;
	int size, i;

	if (str == 0)
	{
		return (0);
	}
	size = 0;

	while (str[size]  != '\0')
	{
		size++;
	}
	p = malloc(size * sizeof(*str) + 1);

	if (p == 0)
	{
		return (0);
	}
	else
	{
		i = 0;

		while (i < size)
		{
			p[i] = str[i];
			i++;
		}
	}
	return (p);
}
