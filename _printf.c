#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - prints output according to a format
 * @format: string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;

	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			_putchar (va_arg(list, int));
			return (1);
		}
		else if (format[i] == 's')
		{
			printf("%s", va_arg(list, char *));
			return (strlen(va_arg(list, char *)));
		}
	}
}
