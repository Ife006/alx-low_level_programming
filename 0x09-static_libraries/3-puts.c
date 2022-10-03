#include "main.h"

/**
 * _puts - prints string to stdout
 * @str: pointer with string value
 * Return: nothing
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s++);
	}
	_putchar('\n');
}
