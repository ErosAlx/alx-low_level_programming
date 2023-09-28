#include "main.h"

/**
 * factorial - returning the factorial of given number.
 *
 * @n: number takes input from other function.
 *
 * Return: if n lower than 0 return (-1) else return int.
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
