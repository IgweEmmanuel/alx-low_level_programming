#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * linear_search - This is the name of the prototype
 * @array: This is the array to search from
 * @size: This is the size of the array elements
 * @value: This is the value of the elements
 *
 * Return: Always EXIT SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return ((int)i);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}

