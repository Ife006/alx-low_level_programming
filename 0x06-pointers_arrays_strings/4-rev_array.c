#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: an array of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int i;
	int j;

	j = n - 1;
	for (i = 0; i < j; i++; j--)
	{
		tmp = *(a + 1);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
	}
}
