#include "main.h"

/**
 * _printf - Printf function
 *
 * @format: formatted character string.
 *
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	int printed_chars = 0, i = 0;
	va_list arg;

	va_start(arg, format);

	if (format == NULL)
		return (-1); 
	while (format[i] != '\0')
		{
			putchar(format[i]);
			i++;
			printed_chars++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			printed_chars += function_specifiers(strchar[i], arg);
		}
		else
		{
			_putchar(strchar[i]);
			printed_chars++;
		}
		i++;
	}
	va_end(arg);

	return (printed_chars);
}
