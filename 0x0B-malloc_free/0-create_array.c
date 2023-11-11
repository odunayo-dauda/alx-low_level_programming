#include <stdlib.h>
/*
 * create_array - Creates an array of chars and initializes
 * it with a specific char.
 * @size: The size of the array.
 * @c: The character with which to initialize the array.
 * Returns:
 * - A pointer to the created array, or
 * - NULL if size is 0 or if memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	char *arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
