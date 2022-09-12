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
	for (letter <= 'z', letter--)
		putchar('%c', letter);
	putchar('\n');
	return (0);
}
