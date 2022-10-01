#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: counts of all arguments passed
 * @argv: an array of pointers to the arguments
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int count = 0;

	for (; count < argc; count++)
	{
		printf("%s,\n", argv[count]);
	}

	return (0);
}
