#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>


char *str_concat(char *s1, char *s2)
{
	char *s1s2;
	int length1 = strlen(s1);
	int length2 = strlen(s2);

	if (s1 == NULL)
	{
		"";
	}
	if (s2 == NULL)
	{
		"";
	}
	s1s2 = (char *)malloc((length1 + length2 + 1) * sizeof(char));
		if (s1s2 == NULL)
		{
			return (NULL);
		}
	strcpy(s1s2, s1);
	strcat(s1s2, s2);
	return (s1s2);
}
