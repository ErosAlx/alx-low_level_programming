#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 *
 * @n: const unsigned int takes input from other function
 * @...: arguments takes inputs for other function
 *
 * Return: returns sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, num = 0;
	va_list list_of_numbers;

	if (n == 0)
	{
		return (0);
	}
	va_start(list_of_numbers, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list_of_numbers, int);
		sum = sum + num;
	}
	va_end(list_of_numbers);
	return (sum);
}
