#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: the first integer
 * @b: the second integer
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
