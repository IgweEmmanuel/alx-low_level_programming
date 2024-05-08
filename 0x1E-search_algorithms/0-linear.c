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

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			printf("Found %d at index: %ld\n\n", value, i);
		}	
	}
	return (1);
}

