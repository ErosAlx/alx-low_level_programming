#include "main.h"

bool check_palindrome(char *str, int left, int right);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 *
 * @s: string takes inputs from other function.
 *
 * Return: returns 1 if a string is a palindrome and 0 if not.
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - checking if str is palindrome or not.
 *
 * @str: string takes input from other function.
 * @left: int takes input from other function.
 * @right: int takes input from other function.
 *
 * Return: 1 if n is palidrome, 0 if not
 */

bool check_palindrome(char *str, int left, int right)
{
	if (left >= right)
	{
		return (true);
	}
	else if (str[left] == str[right])
	{
		return (check_palindrome(str, left + 1, right - 1));
	}
	else
	{
		return (false);
	}
}
