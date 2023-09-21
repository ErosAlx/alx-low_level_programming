#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 *
 * @src: source string takes input from other function.
 * @dest: destination string takes input fom other function.
 *
 * Return: return (dest).
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (dest[i])
	{
		i++;
	}
	while (src[x])
	{
		dest[i++] = src[x];
		x++;
	}
	return (dest);

}

