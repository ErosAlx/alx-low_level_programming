#include "main.h"

/**
 * print_binary - prints a number as binary string
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bit = 8 * sizeof(n), printed = 0;

	while (bit != 0)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed != 0)
		{
			_putchar('0');
		}
	}
	if (printed == 0)
		_putchar('0');
}
