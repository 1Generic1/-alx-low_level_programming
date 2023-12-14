#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted
 * array using Jump Search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located,
 * or -1 if not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev, curr, i;

	if (array == NULL || size == 0)
		return (-1);
	jump = (size_t)sqrt(size);
	prev = 0;
	curr = 0;
	/* Perform the jump search */
	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += jump;
	}
	/* Perform a linear search in the block where the value might be present */
	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);
	for (i = prev; i <= curr && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
