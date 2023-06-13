#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: if size is 0 or memory allocation fails return NULL.
 * else return a pointer to the created array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char* array;
	if (size == 0)
	{
		return (NULL);
	}
	array = (char*)malloc(size * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
