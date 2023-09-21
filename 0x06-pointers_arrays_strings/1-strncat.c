#include "main.h"

/**
 * _strncat - function that concatenates two strings using n bytes from src.
 *
 * @src: source string takes input from other function.
 * @dest: destination string takes input fom other function.
 * @n: takes n bytes from src.
 *
 * Return: return (dest).
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[x] != '\0' && x < n)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	dest[i] = '\0';
	return (dest);
}
i
