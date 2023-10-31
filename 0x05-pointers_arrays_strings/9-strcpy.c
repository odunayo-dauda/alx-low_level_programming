#include "main.h"
/**
 * _strcpy - Copies a string pointed to by
 * src to the buffer pointed to by dest.
 * @dest: A pointer to the destination buffer.
 * @src: A pointer to the source string.
 * Return: A pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
