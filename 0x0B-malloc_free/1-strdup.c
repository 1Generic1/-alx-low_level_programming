#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function returns a pointer to a new string
 * @str: the string
 *
 * Return: a pointer to the string
 */


char *_strdup(char *str)
{
	size_t lenght = strlen(str);
	char *duplicate;
	
	if (str == NULL)
	{
		return (NULL);
	}
	duplicate = (char *) malloc(lenght + 1) * (sizeof (char));
		if (duplicate == NULL)
		{
			return (NULL);
		}
	copied_duplicate = strcpy(duplicate, str);
		return (copied_duplicate);
}
