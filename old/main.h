#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int writeString(char *string);
int writePercent(char c);
int detectType(char c);
int writeChar(char c);
int writedecimal(int n);
int printInteger(int num);

#endif /* MAIN_H */
