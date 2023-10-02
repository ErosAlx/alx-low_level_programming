#include "main.h"

/**
 * _isupper - checking for uppercase character.
 *
 * @c: takes input from other functions.
 *
 * Return: if c uppercase character return 1 else return 0.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
