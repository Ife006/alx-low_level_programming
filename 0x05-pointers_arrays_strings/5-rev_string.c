#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer to string to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	int count = 0;

	while (s[count])
	{
		count++;
	}
	count--;

	for (; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
