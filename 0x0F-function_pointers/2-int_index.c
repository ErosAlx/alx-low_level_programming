#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: pointer to array
 * @size: size of @array
 * @cmp: pointer to function call to check index in array
 *       if it matches
 *
 * Return: returns nothing
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	bool y;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			y = cmp(array[i]);
			if (y == TRUE)
				return (i);
		}
	}

	return (-1);

}
