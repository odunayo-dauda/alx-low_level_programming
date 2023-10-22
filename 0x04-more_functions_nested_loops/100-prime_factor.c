#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor for
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
	long largest_prime = -1;

	while (n % 2 == 0)
	{
		largest_prime = 2;
		n /= 2;
	}

	for (long i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			largest_prime = i;
			n /= i;
		}
	}
	if (n > 2)
	{
		largest_prime = n;
	}

	return (largest_prime);
}

/**
 * main - Entry point to app
 * Return: The success
 */

int main(void)
{
	long n = 612852475143;
	long result = largest_prime_factor(n);

	_putchar(result + '0');
	_putchar('\n');
	return (0);
}
