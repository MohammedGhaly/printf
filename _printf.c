#include "main.h"

/**
 * _printf - prints the string passed
 * @format: string with place holders for different variables
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list printfArguments;
	int i, isSpecifier, charCounter, type;
	char *content = malloc(2);

	va_start(printfArguments, format);
	i = isSpecifier = charCounter = 0;
	while (format[i])
	{
		if (isSpecifier)
		{
			type = detectType(format[i]);
			if (type)
			{
				if (type == 555)
					charCounter += writeChar(va_arg(printfArguments, int));
				else if (type == 666)
					charCounter += writeString(va_arg(printfArguments, char *));
				else
					charCounter += writedecimal(va_arg(printfArguments, int));
			}
			else
				charCounter += writePercent(format[i]);
			isSpecifier = 0;
		} else if (format[i] == '%')
			isSpecifier = 1;
		else
		{
			content[0] = format[i];
			write(1, content, 1);
			charCounter++;
		}
		i++;
	}
	va_end(printfArguments);
	free(content);
	return (charCounter);
}
