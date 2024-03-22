# C - printf Project

By: Angel Suarez & Emmanuel Torres

## Tasks to do in this project:

### 0. Write a function that produces output according to a format

**Description:** Write a function named `my_printf` that produces output according to a format and returns the number of characters printed. The function should handle the following conversion specifiers:

- `%c`: Print a single character.
- `%s`: Print a string.
- `%%`: Print a percent sign.

### 1. Handle additional conversion specifiers

**Description:** Modify the `my_printf` function to handle the following conversion specifiers:

- `%d`: Print a decimal integer.
- `%i`: Print an integer in base 10.

### 2. Create a man page for your function

**Description:** Create a manual page (man page) for the `my_printf` function. Include information about the function's usage, parameters, return value, and examples.

#### Example man page entry:

```shell
NAME
       my_printf - Custom printf function

SYNOPSIS
       #include <stdio.h>

       int my_printf(const char *format, ...);

DESCRIPTION
       my_printf() produces output according to a format and returns the number of characters printed.

RETURN VALUE
       Upon successful completion, my_printf() returns the number of characters printed.

EXAMPLES
       my_printf("Hello, %s!\n", "world");
       // Output: Hello, world!
