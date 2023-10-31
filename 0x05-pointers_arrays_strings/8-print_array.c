#include "main.h"
/**
 * print_array - Prints n elements of an
 * array of integers, followed by a new line.
 * @a: A pointer to an array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int num = a[i];
		int divisor = 1;

		if (num < 0)
		{
			_putchar('-');
			num = -num;
		}

		while (num / divisor >= 10)
			divisor *= 10;

		while (divisor > 0)
		{
			_putchar((num / divisor) + '0');
			num %= divisor;
			divisor /= 10;
		}

		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
