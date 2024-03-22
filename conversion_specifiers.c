#include "main.h"

/**
* conversion_specifier - Handles conversion specifiers in string format.
* @arg: list of arguments
* @specifier: to converse
* Return: 2
*/

int conversion_specifier(const char specifier, va_list arg)
{
printstruct_t carac[] = {
{"c", printchar},
                {"s", printstring},
                {"%", printmodule},
                {"d", printd},
                {"i", printd},
                {NULL, NULL},
        };
        int i;

                for (i = 0; carac[i].strchar != NULL; i++)
                {
                        if (specifier == carac[i].strchar[0])
                        {
                                return (carac[i].strf(arg));
                        }
                }

                _putchar('%');
                _putchar(specifier);

                return (2);
}
