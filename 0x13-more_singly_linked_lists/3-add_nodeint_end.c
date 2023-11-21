#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint_end - Prints lists node
 * @n: a head pointing to the next node
 * @head: This is the entry point to the node
 *
 * Return: returns size_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;
	int count;

	newNode = (listint_t *) malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
		return (*head);
	}
	temp = *head;

	for (count = 0; temp->next != NULL; count++)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (*head);
}
