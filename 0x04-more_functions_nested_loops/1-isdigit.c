#include "main.h"

/**
 * _isdigit - checking for a digit (0 through 9).
 *
 * @c: takes input form other functions.
 *
 * Return: return 1 if is a digit else 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
