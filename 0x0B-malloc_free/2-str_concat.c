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
	int size = 0;

	while (s[size])
	{
		size++;
	}
	return (size);
}

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: input to string 1
 * @s2: input to string 2
 *
 * Return: 0 on faliure
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, sumsize, i;
	char *p;

	if (s1 == NULL)
	{
		s1 = "\0";
	}
	if (s2 == NULL)
	{
		s2 = "\0";
	}

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	sumsize = size1 + size2;
	p = malloc(sumsize * sizeof(char) + 1);

	if (p == 0)
	{
		return (0);
	}
	i = 0;
	while (i <= sumsize)
	{
		if (i < size1)
		{
			p[i] = s1[i];
		}
		else
		{
			p[i] = s2[i - size1];
		}
		i++;
	}
	p[i] = '\0';
	return (p);
}
