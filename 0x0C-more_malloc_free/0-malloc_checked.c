#include "main.h"
#include <stddef.h>
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
	{
		exit(98);
		return ptr;
	}