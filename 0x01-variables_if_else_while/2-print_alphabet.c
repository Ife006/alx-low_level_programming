#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 if success
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
			letter++;
	}
	putchar('\n');
	return (0);
}
