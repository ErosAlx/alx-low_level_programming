#include "main.h"

/**
 * _strspn - a function that gets the length of a prexif substring
 *
 * @s: pointer to string input
 * @accept: substring prefix to look for
 *
 * Return: the number of bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, x;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		x = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				x = 0;
				break;
			}
			j++;
		}
		if (x == 1)
			break;
		i++;
	}

	return (i);
}
