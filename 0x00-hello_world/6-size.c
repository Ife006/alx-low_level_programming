#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always success (0)
 */
int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of char: %lu byte(s)\n", sizeof(c));
	printf("Size of int: %lu byte(s)\n", sizeof(i));
	printf("Size of long int: %lu byte(s)\n", sizeof(a));
	printf("Size of long long int: %lu byte(s)\n", sizeof(b));
	printf("Size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}

