#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character recieved from main
 * Return: 1 if character is lowercase or uppercase alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
