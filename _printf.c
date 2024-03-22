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
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			 printed_chars += conversion_specifier(format[i], arg);
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
		i++;
	}
	va_end(arg);
	return (printed_chars);
}
