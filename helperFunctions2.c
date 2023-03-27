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
	int i, tmp, n2;
	long int d = 10000000000;
	char *s;

	n2 = n;
	for (i = 0; i < 10; i++)
	{
		tmp = n2;
		n2 = n2 % d;
		s[i] = '0' + (tmp - n2) / d;
		d = d / 10;
	}
	write(1, s, 10;
	return (i);
}
