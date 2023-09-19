#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generating keygen.
 * Return: return (0).
 */

int main(void)
{
	char c;
	int sum;

	srand(time(NULL));
	while (sum <= 2645)
	{
		c = rand() % 128;
		sum += c;
		printf("%c", c);
	}
	printf("%c\n", (2772 - sum));
	return (0);
}
