#include "hash_tables.h"

/**
 * hash_table_set - This function adds an element to the hash table
 * @ht: This is the hash table that the element will be inserted
 * @key: This is the key of the node to be inserted
 * @value: This is the key value
 *
 * Return: This returns 1 if it succeeded or 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (0);
	}
	if (key == NULL)
	{
		perror("The key cannot be empty");
		exit(EXIT_FAILURE);
	}
	new_node->value = strdup(value);

	/**This section will call the index*/
	index = key_index((const unsigned char)*key, ht->size);

	/**Insert the new node at the calculated index*/

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->array[index] != NULL)
	{
		new_node->next = ht->array[0];
		ht->array[0] = new_node;
	}
	return (1);
}
