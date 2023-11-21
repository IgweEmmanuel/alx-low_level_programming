#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - This adds new node in a linked list
 * @head: first parameter to point to the new node
 * @n: the new node parameter
 *
 * Return: returns a listint_t struct alias
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *) malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (newNode);
	}

	newNode->n = n;

	if (*head == NULL)
	{
		newNode->next = NULL;
	}
	else
	{
		newNode->next = *head;
	}
	*head = newNode;
	return (*head);
}
