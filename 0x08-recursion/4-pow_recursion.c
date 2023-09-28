#include "main.h"

/**
 * _pow_recursion - returning the value of x raised to the power of y.
 *
 * @x: int takes input from other function.
 * @y: int takes input from other function.
 *
 * Return: If y is lower than 0 return (-1) else return int.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
