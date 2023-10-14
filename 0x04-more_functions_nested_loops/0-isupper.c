#include <unistd.h>
#include "main.h"
/**
 * _isupper - Check if a character is an uppercase letter
 *  @c: The character to be checked
 *  Description: This function checks if 'c'
 *  Return: 1 if 'c' is an uppercase letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
