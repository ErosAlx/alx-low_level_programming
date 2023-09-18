#include "main.h"

/**
 * rev_string - reversing a string.
 *
 * @s: string takes input from other function.
 *
 * Return: return s.
 */

void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char tmp;

	while (s[length] != '\0')
	{
		length++;
	}
	while (i < length / 2)
	{
		tmp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tmp;
		i++;
	}
}
