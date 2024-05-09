#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_search - This is the prototype
 * @array: the array pointer pointing at first element
 * @size: the size of the array
 * @value: the value of the array element
 *
 * Return: Always RETURN_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high;
	size_t mid, i;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		printf("Searching in array: ");

		for (i = low; (int)i <= high; i++)
		{
			printf("%d", (int)i);
			if ((int)i < high)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
