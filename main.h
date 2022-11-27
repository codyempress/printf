#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>

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
int parser(const char *format, convert_t f_list[], va_list arg_list);
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int unsigned_integer(va_list);

#endif
