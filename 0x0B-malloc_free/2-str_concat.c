#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *s1s2;
	size_t length1;
	size_t length2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = strlen(s1);
	length2 = strlen(s2);
	s1s2 = (char *)malloc((length1 + length2 + 1) * sizeof(char));
		if (s1s2 == NULL)
		{
			return (NULL);
		}
	strcpy(s1s2, s1);
	strcat(s1s2, s2);
	return (s1s2);
}
