#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that prints _putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	char str[] = "_puthchar";
	int ch = 0;

	while (ch < 9)
	{
		_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');
	return (0);
}
