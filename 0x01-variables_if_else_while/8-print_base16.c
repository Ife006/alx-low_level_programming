#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 at success
 */
int main(void)
{
	char digit, alpha;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);
	for (alpha = 'a'; alpha <= 'f'; alpha++)
		putchar(alpha);
	putchar('\n');
	return (0);
}
