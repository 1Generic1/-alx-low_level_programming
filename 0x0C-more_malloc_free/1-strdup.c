#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <strings.h>

char *_strdup(char *str)
{
	int len;
	duplicate;
	if (str == NULL)
		return (NULL);
	len = strlen(str);
	/* allocate space for the new string */
	duplicate = (char *)malloc(len + 1 * sizeof(char));
		if (duplicate = NULL)
			return (NULL);
		strcpy(duplicate, str);
			return (duplicate);
}

