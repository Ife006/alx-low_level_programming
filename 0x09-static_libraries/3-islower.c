#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: character received from main
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
