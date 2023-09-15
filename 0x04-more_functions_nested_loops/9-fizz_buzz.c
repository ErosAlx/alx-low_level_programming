#include "main.h"

/**
 * main - Entry point
 *
 * Description: program that prints the numbers from 1 to 100
 * for multiples of 3 print Fizz ,for 5 print Buzz ,
 * for bothi 3 and 5 print FizzBuzz.
 *
 * Return: return 0.
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
		i++;
	}
	return (0);
}
