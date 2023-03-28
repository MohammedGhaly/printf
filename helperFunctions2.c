#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * writedecimal - prints decimal numbers
  * @n: input num
  *
  * Return: num length
  */
int writedecimal(int n)
{

	char *s;
	int n2;
	int isNegative;

	s = malloc(3);
	isNegative = 0;

	if (n == 0)
	{
		s[0] = '0';
		free(s);
		return (write(1, s, 1));
	}
	if (n < 0)
	{
		n2 = -n;
		s[0] = '-';
		write(1, s, 1);
		isNegative = 1;
			free(s);
		return ((isNegative + printInteger(n2)));
	}
	else
	{
		free(s);
		return (isNegative + printInteger(n));
	}
}

/**
 * printInteger - prints integer
 * @num: integer to be printed
 * Return: size of the integer
 */
int printInteger(int num)
{
	int size = 1;
	int temp = num;
	char *buffer;
	int i;

	while (temp >= 10)
	{
		size++;
		temp /= 10;
	}

	buffer = (char *) malloc(size * sizeof(char));
	if (buffer == NULL)
		exit(1);

	for (i = size - 1; i >= 0; i--)
	{
		buffer[i] = (num % 10) + '0';
		num /= 10;
	}

	write(stdout, buffer, size);

	free(buffer);
	return (size);
}
