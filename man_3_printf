/******************************************************************************

                  Custom printf function - _printf

******************************************************************************/

## NAME

`_printf` - Custom printf function

## SYNOPSIS

```c
#include "main.h"

int _printf(const char *format, ...);

DESCRIPTION
The _printf function is a custom implementation of the printf function from the C standard library. It takes a format string and a variable list of arguments and produces formatted output according to the format string.



PARAMETERS
format: Format string containing format specifiers and text to be printed.
...: Variable arguments to be formatted and printed according to the format string.


RETURN VALUE
The return value is the total number of characters printed on success and -1 on error.


AUTHORS
Angel Suarez and Emmanuel Torres


COPYRIGHT
© 2024, HolbertonStudents. All rights reserved.


USAGE
#include "main.h"

int main() {
    _printf("Hello, %s!\n", "world");
    return 0;
}

EXAMPLE
#include "main.h"

int main() {
    int n = 10;
    _printf("The value of n is: %d\n", n);
    return 0;
}


ERRORS
If a null format is provided as an argument, the _printf function will return -1.


NOTES
The _printf function handles the following format specifiers: %c, %s, %d, %i, %u, %x, %X, %o, %p.

The _printf function can also handle the following optional flags: -, +, 0, #, and field width.

Width and precision parameters are also supported.

To print special characters like %, *, etc., they should be preceded by \.
