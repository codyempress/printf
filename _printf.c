#include "main.h"

/**
 * _prints - prints number of charcaters
 * @format: character string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	convert_t f_list[] =
	{
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent}
	};
	va_list arg_list;

	if (format == null)
	{
		return (-1);
	}

	va_start(arg_list, format);
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
