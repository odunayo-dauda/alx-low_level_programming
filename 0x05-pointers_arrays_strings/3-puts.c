#include "main.h"
/**
 * _puts - Prints a string to stdout.
 * @str: A pointer to a string to be printed.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
