#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars.
 * @size: The size of the array.
 * @c: The character with which to initialize the array.
 * Return: A pointero the created array, or NULL if size is
 * 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
