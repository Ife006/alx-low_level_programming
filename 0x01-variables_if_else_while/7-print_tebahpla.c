#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success at 0
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
