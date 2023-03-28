#include "main.h"

/**
 * writePercent - prints percentage sign %
 * Return: ALways 1
 */
int writePercent(void)
{
	_putchar(37);
	return (1);
}

/**
 * writeChar - prints a character for _printf
 * @val: arguments of printf
 * Return: Always 1
 */
int writeChar(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * writeString - prints a string
 *@val: arguments of printf
 *Return: number of printed characters
 */
int writeString(va_list val)
{
	char *s;
	int i, len;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	len = _strlen(s);
	for (i = 0; i < len; i++)
		_putchar(s[i]);
	return (len);
}
/**
 * _putchar - prints a character to the standard output
 * @c: the character to be printed
 * Return: Always 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
