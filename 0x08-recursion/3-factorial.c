#include "main.h"
/**
 * factorial - Calculate the factorial of a number using recursion
 * @n: The number for which to calculate the factorial
 * Return: The factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
