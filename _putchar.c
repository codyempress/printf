#include <unistd.h>

/*
 * _putchar - writes the character C to standard output
 * @c - the character to print
 *
 * Return: 0 success, i
 *
 */

int _putchar(char c)
{
        return (write (1, &c, 1));
}
