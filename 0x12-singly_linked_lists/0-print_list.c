#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @l: the list_t list
 * Return: the number of nodes in l
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (l)
	{
		if (l->str == NULL)
		{
			printf("[0] (nil)\m");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		nodes++;
		h = h->next;
	}

	return (nodes);
}
