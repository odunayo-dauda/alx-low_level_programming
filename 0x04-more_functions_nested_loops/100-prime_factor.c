#include <stdio.h>

/**
 * largest_prime_factor - Finds the largest prime factor of a number.
 *  @n: The number to find the largest prime factor for.
 * Return: The largest prime factor of the number.
 */
long largest_prime_factor(long n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	long largest = -1;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}
	for (long i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
		{
			largest = i;
			n /= i;
		}
	}
	if (n > 2)
		largest = n;
	return (largest);
}
/**
 * main-Entry point
 *  Return: The largest prime factor of the number.
 */
int main(void)
{
	long n = 612852475143;

	long result = largest_prime_factor(n);

	printf("%ld\n", result);
	return (0);
}
