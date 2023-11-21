#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - This function frees a struct
 * @head: this is the head pointer to the nodes
 *
 * Return: it returns void
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	free_listint(head->next);
	free(head);
}

