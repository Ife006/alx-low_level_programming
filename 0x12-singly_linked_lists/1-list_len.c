#include "lists.h"

/**
 * list_len - returns the number of elements ina  linked list_t list
 * @l: the linked list_t list
 * Return: the number of elements in l
 */
size_t list_len(const list_t *h)
{
	size_t lmnts = 0;

	while (l)
	{
		lmnts++;
		l = l->next;
	}

	return (lmnts);
}
