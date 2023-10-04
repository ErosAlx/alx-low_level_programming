#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: int takes input from other function.
 * @height: int takes input from other function.
 *
 * Return: 0 on faliure
*/

int **alloc_grid(int width, int height)
{
	int **p, i, x;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	p = malloc(height * sizeof(*p));

	if (p == 0)
	{
		return (0);
	}

	i = 0;

	while (i < height)
	{
		p[i] = malloc(width * sizeof(**p));

		if (p[i] == 0)
		{
			while (i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
		x = 0;

		while (x < width)
		{
			p[i][x] = 0;
		}
	}
	return (p);
}
