#include "main.h"

/**
 * print_char - print a character. 
 *
 * @arg: char to print.
 *
 * Return: numbers of arguments.
 *
 */

int print_char(va_list arg)
{
        _putchar(va_arg(arg, int));

        return (1);
}

/**
 * print_string - prints a string.
 *
 * @arg: character to print.
 *
 * Return: number of arguments.
 *
 */

int print_string(va_list arg)
{
        char *str = va_arg(arg, char *);
        int count = 0;

        if (str == NULL)
        {
                str = "(Null)";
        }

        while (*str != '\0')
        {
                _putchar(*str++);
                count++;

        }
        return (count);
}

/**
 * print_percent - prints '%'
 *
 * @arg: is ignored.
 *
 * Return: 1
 *
 */

int print_percent(__attribute__((unused))va_list arg)
{
        _putchar('%');

        return (1);
}

/**
 * print_number - prints an integer.
 *
 * @arg: argument to print.
 *
 * Return: Number of characters printed
 */

int print_number(va_list arg)
{
        int count = 0;
        int num = va_arg(arg, int);
        unsigned int abs_num, mag_finder, divisor = 1;

        if (num < 0)
{
                _putchar ('-');
                count++;
                abs_num = -num;
        }

        else
        {
                abs_num = num;
        }

        mag_finder = abs_num;

        while (mag_finder > 9)
        {
                mag_finder /= 10;
                divisor *= 10;
        }

        while (divisor != 0)
        {
                _putchar((abs_num / divisor) % 10 + '0');
                count++;
                divisor /= 10;
        }

        return (count);
}
