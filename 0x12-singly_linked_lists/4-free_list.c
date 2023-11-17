#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * free_list - frees a linked list
  * @hd: the beginning of the list
  */
void free_list(list_t *hd)
{
	if (hd == NULL)
		return;
	free_list(hd->next);
	free(hd->str);
	free(hd);
}
