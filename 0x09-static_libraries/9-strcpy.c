#include "main.h"

/**
 * _strcpy - copies a string from one pointer to another
 * including the terminating null byte (\0)
 *
 * @src: source of string parameter input
 * @dest: destination of string
 *
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int b = 0;
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[b] = src[a];
		b++;
	}
	dest[b] = '\0';

	return (dest);
}
