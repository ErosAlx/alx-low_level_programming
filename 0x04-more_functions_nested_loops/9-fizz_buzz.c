#include <stdio.h>

/** main - Entry point
 *
 * Description: program that prints the numbers from 1 to 100
 * for multiples of three print Fizz /
 * for the multiples of five print Buzz /
 * For numbers which are multiples of both print FizzBuzz.
 *
 * Return: return 0.
 */

int main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
}
