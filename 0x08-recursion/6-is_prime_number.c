#include "main.h"

/**
 * is_prime_number - Check if a number is prime using recursion
 * @n: The number to check for primality
 * Return: 1 if n is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n, 2));
}
/**
 * is_prime - Helper function to check if a number is prime using recursion
 * @n: The number to check for primality
 * @i: The current number to check as a potential divisor
 * Return: 1 if n is prime, 0 if not
 */
int is_prime(int n, int i)
{
	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime(n, i + 1));
}
