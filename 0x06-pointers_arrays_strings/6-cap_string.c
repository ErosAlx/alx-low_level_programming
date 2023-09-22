#include "main.h"

/**
 * delim_check -  checking if the char is delimiter or not.
 *
 * @c: charachter.
 *
 * Return:if c is a delimiter the return is 1 if not the returns is 0.
*/

int delim_check(char c)
{
	char delim_check[] = " \t\n,;.!?\"(){}";
	int length = 0;

	/* Calculate the length of delim_check array */
	while (delim_check[length] != '\0')
	{
		length++;
	}

	for (int x = 0; x < length; x++)
	{
		if (c == delim_check[x])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - a function that capitalizes
 *              all words of a string
 *
 * @str: pointer to char input array
 *
 * Return: @str
*/

char *cap_string(char *str)
{
	char *AfterCap = str;
	int delim = 1;
	int i = 0;

	while (str[i])
	{
		if (delim_check(str[i]))
		{
			delim = 1;
		}
		else if (delim && (str[i] >= 97 && str[i] <= 122))
		{
			str[i] = str[i] - 32;
			delim = 0;
		}
		else
		{
			delim = 0;
		}
		i++;
	}
	return (AfterCap);
}
