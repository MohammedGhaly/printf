# printf

### Description

------------


The printf function sends formatted output to stdout.
_printf() function format string is a character string, beginning and ending in its initial shift state, if any. 
These arguments are placed using the percentage '%' operator

------------


#### Resources

------------


Secrets of printfby Don colton
https://www.cypress.com/file/54761/download

------------



#### Authorized functions and macros

------------


write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg)

------------

#### Compilation

------------


The code must be compiled this way:

**$ gcc -Wall -Werror -Wextra -pedantic *.c**

As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)

The main files will include your main header file (main.h): **#include main.h**


------------

###### Specifiers

Specifier                |Output                        |Examples |
|----------------|-------------------------------|-----------------------------|
| `c` | Character | y |
| `d` or `i` | Signed integer | 1024, -1024 |
| `s` | String of characters | Hello Alx |


------------


#### Files contained in this repository


------------

|Name                |Information                        |Relevant Files                         |
|----------------|-------------------------------|-----------------------------|
|`main.h`	| Header file with the data type struct, standard libraries and custom prototypes.| `*.c compilation` |
|`_printf.c`|Main printf function file. Calls other functions.|`printf_(name of var).c file` |
|`writeNumber.c` | Contains decimal and integer functions. | `None` | 
`writeCharStr.c` | Custom functions for char and string manipulation type. | `None`
`_putchar.c` | Custom putchar function. | `None` |


------------


### Authors &copy;

- Mohammed Ghaly
- Mohamed Khalil

