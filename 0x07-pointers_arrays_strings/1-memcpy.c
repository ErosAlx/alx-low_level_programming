#include "main.h"

/**
 * _memcpy - function that copies memory area.
 *
 * @dest: destination string takes input from other function.
 * @src: source string takes input from othere function.
 * @n: number of bytes takes input from other function.
 *
 * Return: return dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
