#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers to another function
 * @id: char pointer of the specifier
 * @f: pointer to function for the conversion specifier
 */
typedef struct format
{
	char *id;
	int (*f)();
} matchFun;

int _putchar(char c);
int _printf(const char * const format, ...);
int writeChar(va_list val);
int _strlen(char *s);
int writeString(va_list val);
int writePercent(void);
int writeInt(va_list args);
int writeDec(va_list args);

#endif /* MAIN_H */
