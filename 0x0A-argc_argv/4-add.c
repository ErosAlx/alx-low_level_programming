#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - checking if string array is num
 * @str: string to check
 * Return: returns 0 if it's a number
 *         returns 1 if it's not a number
*/

int isNum(char str[])
{
	int i, l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(str[i]))
			return (1);
	}
	return (0);
}
/**
 * main - program that adds positive numbers.
 *
 * @argv: pointer takes argument value.
 * @argc: int counter of argv.
 *
 * Return: returns 0.
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]) == 0)
			{
				sum = sum + atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
