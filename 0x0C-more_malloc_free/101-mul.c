#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: input pointer that represents memory block
 *     to fill
 * @b: characters to fill/set
 * @n: number of bytes to be filled
 *
 * Return: pointer to the filled memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory
 *           for an array using memset
 *
 * @nmemb: size of array
 * @size: size of each element
 *
 * Return: pointer to new allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}


/**
 * multiply - initialize array with 0 byte
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: nothing
*/

void multiply(char *s1, char *s2)
{
	int i, s1_len, s2_len, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	s1_len = _length(s1);
	s2_len = _length(s2);
	tmp = s2_len;
	total_l = s1_len + s2_len;
	ptr = _calloc(sizeof(int), total_l);

	/* store our pointer address to free later */
	temp = ptr;

	for (s1_len--; s1_len >= 0; s1_len--)
	{
		f_digit = s1[s1_len] - '0';
		res = 0;
		s2_len = tmp;
		for (s2_len--; s2_len >= 0; s2_len--)
		{
			s_digit = s2[s2_len] - '0';
			res += ptr[s2_len + s1_len + 1] + (f_digit * s_digit);
			ptr[s1_len + s2_len + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[s1_len + s2_len + 1] = res % 10;
	}

	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}

	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}


/**
 * main - Entry point
 *
 * Description: a program that multiplies
 *            two positive numbers
 *
 * @argc: number of arguments
 * @argv: arguments array
 *
 * Return: 0 on success 98 on faliure
*/

int main(int argc, char *argv[])
{
	char *n1 = argv[1];
	char *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();

	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);
	return (0);
}
