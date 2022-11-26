#include "main.h"

/**
 * _write_char - writes the character c to stdoout
 * @c: the character to be printed
 *
 * Return: 1 
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
