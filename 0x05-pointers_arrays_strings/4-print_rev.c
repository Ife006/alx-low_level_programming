#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the pointer to string to print
 * Return: nothing
 */
void print_rev(char *s)
{
	int count = o;

	while (s[count])
	{
		count++;
	}

	count--;

	for (; count >= 0; count--)
	{
		_putchcar(s[count]);
	}
	_putchar('\n');
}
