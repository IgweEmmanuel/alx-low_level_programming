#include "hash_tables.h"

/**
 * key_index - This function gives the index of a key
 * @key: This is the pointer to array of characters
 * @size: This is the size of the array of the hash table
 *
 * Return: This returns unsigned long int of the key_index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;
	unsigned long int index;

	hash_code = hash_djb2(key);	

	index  = hash_code % size;
	return (index);
}
