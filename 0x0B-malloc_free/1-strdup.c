#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string
 * @str: the string to be duplicated
 *
 * Return: NULL, if @str is null, or insufficient memory is available
 * Otherwise, pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	duplicate[len] = '\0';

	return (duplicate);
}
