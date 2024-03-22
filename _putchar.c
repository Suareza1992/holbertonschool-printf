#include "main.h"

/**
*
* putchar - Prints character in standard output.
*
* Return: Always (0)
*/

int _putchar(char c)
{
    return (write(1, &c, 1));
}
