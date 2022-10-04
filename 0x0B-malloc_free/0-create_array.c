#include "main.h"
#include <stlib.h>

/**
 * create_array - creates and array of chars and initializes it
 * with a specific char
 * @size: sixe of the array to be initialized
 * @c: specifi char the initialization starts with
 *
 * Return: null, if size is equal to zero, or the pointer fails
 * Otherwise apointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (null);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
