#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: amount of bytes
 *
 * Return: pointer to our new allocated memory
 *         exit with 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *p = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}
