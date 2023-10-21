#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 *  @n: The number to extract the last digit from
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
