#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>

/**
 * struct node - sturctured data for linked lists
 * @n: this is n for first variable member
 * @next: points to the next node
 */

typedef struct node
{
	int n;
	struct node *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
