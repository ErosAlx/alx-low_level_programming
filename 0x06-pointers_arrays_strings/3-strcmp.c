#include "main.h"

/**
 * _strcmp - function that compares two strings.
 *
 * @s1: string takes input from other function.
 * @s2: string takes input fom other function.
 *
 * Return: return (result).
 */

int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int x = 0;
	int i = 0;

	if (s1[i] != s2[x])
	{
		while (s1[i])
		{
			result = (((int)s1[i] - 48) - ((int)s2[x] - 48));
			break;
		}
		i++;
		x++;
	}
	else
	{
		return (result);
	}
}
