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
    int i;

    if (string == NULL)
        string = "(null)";

    strLen = 0;
    i = 0;

    while (string[strLen])
        strLen++;
    
    write(1,string, strLen);
    return (strLen);
}
