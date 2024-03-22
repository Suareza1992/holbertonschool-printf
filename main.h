#ifndef MAIN_HEADER_FILE
#define MAIN_HEADER_FILE

int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int _printf(const char *format, ...);

void print_buffer(char buffer[], int *buff_ind);

#endif
