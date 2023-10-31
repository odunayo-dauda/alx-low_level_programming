#include "main.h"
/**
 * puts_half - Prints the second half of a string.
 * @str: A pointer to a string.
 */
void puts_half(char *str)
{
	int length = 0;
	int i;

	while (str[length])
	{
		length++;
	}
	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length + 1) / 2;
	}
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
