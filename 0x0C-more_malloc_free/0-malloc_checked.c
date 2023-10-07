#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * and exit if failed.
 *
 * @b: int takes input form other function.
 *
 * Return: returns int or 98.
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == 0)
	{
		exit(98);
	}
	return (p);
}


