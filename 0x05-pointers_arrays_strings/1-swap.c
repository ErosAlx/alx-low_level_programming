#include "main.h"

/**
 * swap_int - function that swap the values of two integers.
 *
 * @a: pointer takes input from other function.
 * @b: pointer takes input from other function.
 *
 * Return: return (0).
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
