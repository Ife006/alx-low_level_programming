#include <stdio.h>

/**
 * main - Entry point
 *
 * Return; Alwasys success at 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
