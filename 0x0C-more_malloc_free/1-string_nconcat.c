#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;
	result = (char *)malloc(len1 + n +1);
	if (result == NULL)
		return (NULL);
	strncpy(result, s1, len1);
	strncpy(result + len1, s2, n);
	result[len1 + n] = '\0';
	return (result);
}
