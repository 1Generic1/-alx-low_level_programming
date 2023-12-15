#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value
 * in a sorted array using Exponential Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is
 * located, or -1 if not present or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, low, high, mid, j;

	if (array == NULL || size == 0)
		return (-1);
	if (array[0] == value)
	{
		printf("Value checked array[0] = [%d]\n", array[0]);
		return (0);
	}
	i = 1;
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	low = i / 2;
	high = (i < size) ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (j = low; j <= high; ++j)
		{
			printf("%d", array[j]);
			if (j < high)
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


