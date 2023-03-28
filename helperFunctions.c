#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * writeString - prints the string passed
 * @string: pointer to the string to be printed
 * Return: the number of characters printed
 */
int writeString(char *string)
{
	int strLen;

	if (string == NULL)
		string = "(null)";

	strLen = 0;

	while (string[strLen])
		strLen++;

	write(1, string, strLen);
	return (strLen);
}

/**
 * writeChar - writes a character to the standard output
 * @c: character
 * Return: Always 1
 */
int writeChar(char c)
{
	char *character;

	character = malloc(1);
	character[0] = c;
	write(1, character, 1);
	free(character);
	return (1);
}
/**
 * writePercent - handles the case of unsupported place holders
 * @c: the character after (%) in (format)
 * Return: Always 2
 */
int writePercent(char c)
{
	char *percent;

	percent = malloc(2);
	percent[0] = '%';
	if (c == '%')
	{
		(write(1, percent, 1));
		free(percent);
		return (1);
	}
	else
	{
		percent[1] = c;
		(write(1, percent, 2));
		free(percent);
		return (2);
	}
}

/**
 * detectType - detects the place holder type
 * @c: place holder
 * Return: returns a coded value of the place holder type
 */
int detectType(char c)
{
	switch (c)
	{
		case 'c':
			return (555);
		case 's':
			return (666);
		case 'd':
			return (777);
		case 'i':
			return (888);
		default:
			return (0);
	}
}
