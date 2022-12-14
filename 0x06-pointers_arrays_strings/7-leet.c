#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: a pointer to encoded string
 */
char *leet(char *s)
{
	int i = 0, j;
	char letters[9] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if ((s[i] == letters[j]) || (s[i] - 32 == letters[j]))
				s[i] = j + '0';
		}

		i++;
	}

	return (s);
}
