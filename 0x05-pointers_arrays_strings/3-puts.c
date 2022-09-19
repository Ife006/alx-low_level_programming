#include "main.h"

/** 
 * _puts - prints string to stdout
 * @s: pointer with string value
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_puthchar(*str++);
	}
	_putchar('\n');
}
