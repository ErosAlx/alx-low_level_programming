#include "main.h"

/**
 * _strncpy - function that copies a string.
 *
 * @src: source string takes input from other function.
 * @dest: destination string takes input fom other function.
 * @n: takes n bytes from src.
 *
 * Return: return (dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (src[x] != '\0' && x < n)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
