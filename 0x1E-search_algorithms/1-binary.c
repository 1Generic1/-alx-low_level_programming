#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using binary search
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: The index where value is located,
 * or -1 if not present or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid;
	size_t i;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = (size_t)low; i <= (size_t)high; i++)
		{
			printf("%d", array[i]);
			if (i < (size_t)high)
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
