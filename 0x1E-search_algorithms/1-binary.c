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
	int left;
	int right;
	size_t  mid;
	size_t i;

	if (array == NULL)
	{
		return -1;
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		 mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; (int)i <= right; i++)
		{
			printf("%d", array[(int)i]);
			if ((int)i < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		if (array[mid] == value)
		{
			return mid;
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return -1;
}
