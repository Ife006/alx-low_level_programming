#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the elements of a listint_t list
 * @l: a pointer to the head of the listint_t list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (l)
	{
		nodes++;
		printf("%d\n", l->n);
		l = l->next;
	}

	return (nodes);
}
