#include "lists.h"

/**
 * listint_t - This function will count the number of elements in a linked list
 * @h: This is the head parameter that points to the first node
 *
 * Return: This returns unsigned int
 */

size_t listint_len(const listint_t *h)
{
	size_t count;
	for (count = 0; h->next != NULL; count++)
	{
		h = h->next;
	}	
	return(++count);
}
