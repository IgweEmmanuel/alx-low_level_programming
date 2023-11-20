#include "lists.h"

/**
 * print_listint - Prints lists node
 * @h: a head pointing to the next node
 *
 * Return: returns size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
