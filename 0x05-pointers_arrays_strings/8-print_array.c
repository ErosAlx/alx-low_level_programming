#include "main.h"

/**
 * print_array - printing n elements of an array of integers.
 *
 * @a: string takes input from other function.
 * @n: string takes input from other function.
 *
 * Return: return s.
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
