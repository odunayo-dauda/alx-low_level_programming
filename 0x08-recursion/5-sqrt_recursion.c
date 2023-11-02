#include "main.h"
/**
 * _sqrt_recursion - Calculate the square root of a number using recursion
 * @n: The number for which to calculate the square root
 * Return: The square root of n, or -1 if there's no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_sqrt(n, 2));
}
/**
 * find_sqrt - Helper function to find the square root using recursion
 * @n: The number for which to calculate the square root
 * @i: The current number to check
 * Return: The square root of n if found, or -1 if not found
 */
int find_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}
