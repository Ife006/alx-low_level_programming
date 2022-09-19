#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: pointer with the address value
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
