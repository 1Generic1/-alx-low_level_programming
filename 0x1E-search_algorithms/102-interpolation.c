#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a
 * sorted array using Interpolation Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The first index where the value is located,
 * or -1 if not present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t hi = size - 1;
	size_t pos;
	double f;

	if (array == NULL || size == 0)
		return (-1);
	while (low <= hi && value >= array[low] && value <= array[hi])
	{
		/* cal the probe position using interpolation formula */
		f = (((double)(hi - low) / (array[hi] - array[low])) * (value - array[low]));
		pos = low + f;
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
