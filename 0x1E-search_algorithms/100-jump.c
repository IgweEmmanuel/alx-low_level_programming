#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>
#include <math.h>
/**
 * jump_search - This is the prototype for the jump search algorithm
 * @array: this is the array pointer to the first element
 * @size: this is the size or length of the array
 * @value: this is the value of the array elements
 *
 * Return: Always EXIT_SUCCESS
 */
int jump_search(int *array, size_t size, int value)
{
	int i, prev, curr, jump;

	jump = sqrt(size);
	prev = 0;
	curr = jump;

	if (array == NULL && size == 0)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (curr < (int)size && array[curr] < value)
	{
		printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, curr);

	for (i = prev; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
