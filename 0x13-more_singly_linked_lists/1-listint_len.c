#include "lists.h"

/**
 * listint_len - Counts the number of elements in a linked list
 * @h: This is the head parameter that points to the first node
 *
 * Return: This returns unsigned int
 */
size_t listint_len(const listint_t *h)
{
	size_t count;
	const listint_t *temp;
	temp = h;

	for (count = 0; temp != NULL; count++)
	{
		temp = temp->next;
	}
	return (count);
}
