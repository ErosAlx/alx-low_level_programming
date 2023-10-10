#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: bytes allocate.
 *
 * Return: pointer to our new allocated memory
 *         exit with 98 if malloc fails
*/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
