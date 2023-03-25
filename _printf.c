#include "main.h"

/**
 * _printf - prints the string passed
 * @format: string with place holders for different variables
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list prntPtr;
	int i, isSpecifier, charCounter;
	char *content = malloc(2);

	va_start(prntPtr, format);
	content[1] = '\0';
	i = isSpecifier = charCounter = 0;

	while (format[i])
	{
		if (isSpecifier)
		{
			switch (format[i])
			{
				case 'c':
					content[0] = va_arg(prntPtr, int);
					write(1, content, 1);
					charCounter++;
					i++;
					isSpecifier = 0;
					continue;
					break;

				case 'd':
					/* code */
					break;

				case 'i':
					/* code */
					break;

				case 's':
					charCounter += writeString(va_arg(prntPtr, char *));
					i++;
					isSpecifier = 0;
					continue;
					break;

				default:
					break;
			}
		}

		if (format[i] == '%')
		{
			isSpecifier = 1;
			i++;
			continue;
		}

		content[0] = format[i];
		write(1, content, 1);
		charCounter++;
		i++;
	}
	free(content);
	printf("\ncharCounter = %d", charCounter);
	return (charCounter);
}
