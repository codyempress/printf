#ifndef MAIN_H
#define MAIN_H

/**
 * struct convert - structures symbols and functions
 *
 * @sym: the operator
 * @f: the function associated
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert convert_t;

int _printf(const char *format, ...);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);

#endif
