#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 *
 * @s: string takes input from other function.
 * @b: charactere takes input from othere function.
 * @n: numbere of bytes takes input from other function.
 *
 * Return: return 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
}