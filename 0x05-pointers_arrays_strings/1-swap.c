#include "main.h"
/**
 * swap_int - This swaps the the values of a band b
 * @a: first value to be swapped
 * @b: second value to be swapped
 *
 * Return: returns void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
