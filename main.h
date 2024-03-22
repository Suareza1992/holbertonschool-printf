#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);

typedef struct print_struct
{
	char *strchar;
	int (*strf)(va_list);
} printstruct_t;

int _putchar(char c);
int conversion_specifier();
int print_char(va_list arg);
int print_string(va_list arg);
int print_percent(__attribute__((unused))va_list arg);
int conversion_specifier(const char specifier, va_list arg);
int print_number(va_list arg);

#endif
