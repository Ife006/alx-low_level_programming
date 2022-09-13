#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times, followed by a new line
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 9, i++)
	{
		char c;

		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
	}
}
