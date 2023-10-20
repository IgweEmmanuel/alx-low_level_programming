#include "main.h"

/**
 * reverse_array - reverses array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int x = 0, y, tmp;

	for (y = n - 1; y > x; y--)
	{
		tmp = a[y];
		a[y] = a[x];
		a[x] = tmp;
		x++;
	}
}
