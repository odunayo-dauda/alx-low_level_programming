#include "main.h"

/**
 * is_prime - Checks if a number is prime
 * @n: The number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime(long n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);

	for (long i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
	}

	return (1);
}

/**
 * largest_prime_factor - Finds the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 * Return: The largest prime factor
 */
long largest_prime_factor(long n)
{
	long largest = -1;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (long i = 3; i <= n; i += 2)
	{
		while (n % i == 0)
		{
			if (is_prime(i))
				largest = i;
			n /= i;
		}
	}

	return (largest);
}

/**
 * main - Entry point to app
 * Return: The success
 */
int main(void)
{
	long number = 612852475143;
	long largest_prime = largest_prime_factor(number);

	_putchar(largest_prime + '0');
	_putchar('\n');

	return (0);
}
