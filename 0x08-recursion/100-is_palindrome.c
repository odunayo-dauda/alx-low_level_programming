#include "main.h"

/**
 * is_palindrome - Check if a string is a palindrome using recursion
 * @s: The string to check
 * Return: 1 if it's a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	return (check_palindrome(s, 0, length - 1));
}
/**
 * check_palindrome - Helper function to check
 * if a string is a palindrome using recursion
 * @s: The string to check
 * @start: The starting index
 * @end: The ending index
 * Return: 1 if it's a palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
