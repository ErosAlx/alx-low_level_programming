#include "variadic_functions.h"

/**
 * print_numbers - a function that print numbers, followed by a new line.
 *
 * @separator: pointer to constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list numbers;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(numbers, int);
		printf("%d", num);
		if (separator && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(numbers);
	printf("\n");
}
