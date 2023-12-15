#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a
 * sorted array using advanced binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where the value is located,
 * or -1 if not present or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid;
	int result;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (i = 0; i < size; ++i)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}
	printf("\n");
	/* calculate the midpoint */
	mid = (size - 1) / 2;
	if (array[mid] == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (advanced_binary(array, mid + 1, value));
		return (mid);
	}
	else if (array[mid] < value)
	{
		result = advanced_binary(array + mid + 1, size - mid - 1, value);
		return ((result == -1) ? -1 : (int)(mid + 1 + result));
	}
	else
	{
		return (advanced_binary(array, mid, value));
	}
}
