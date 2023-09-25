#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: string takes input from other function.
 * @b: charactere takes input from othere function.
 * @n: numbere of bytes takes input from other function.
 *
 * Return: return s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
