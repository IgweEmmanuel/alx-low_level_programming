#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * interpolation_search - this is the prototype or function
 * @array: this is the array
 * @size: this is the size of the array
 * @value: this is the value in the array
 *
 * Return: Always EXIT_SUCCESS
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high;
	size_t pos;

	low = 0;
	high = size - 1;


	if (array == NULL && size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%d] is out of range\n", high);

	return (-1);
}
