#include "main.h"
/**
 * _strlen - Computes the length of a string.
 * @s: The string to measure
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}
