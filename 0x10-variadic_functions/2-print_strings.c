#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed by a new line
 *
 * @separator: pointer to a constant separator
 * @n: start of input variables
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);

		if (str)
			printf("%s", str);

		else
			printf("(nil)");

		if (separator && i != n - 1)
			printf("%s", separator);
	}
	va_end(strings);
	printf("\n");
}
