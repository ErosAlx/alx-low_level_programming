#include "main.h"

/**
 * reverse_array - reversing the content of an array of integers.
 *
 * @a: array takes input from other function.
 * @n: (number of elements) takes input fom other function.
 *
 * Return: return (0).
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;
	int x = n - 1;

	while (i < x)
	{
		tmp = a[i];
		a[i] = a[x];
		a[x] = tmp;
		i++;
		x--;
	}
}
