#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of times the character \ should be printed.
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, spaces;

		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < i; spaces++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
