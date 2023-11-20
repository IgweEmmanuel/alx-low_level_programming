#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdio.h>
typedef struct node
{
	int n;
	struct node *next;
}listint_t;

size_t print_listint(const listint_t *h);

#endif
