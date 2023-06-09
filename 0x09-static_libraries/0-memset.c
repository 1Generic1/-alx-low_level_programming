#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 *           with the constant byte c
 * @s: pointer to the memory area to be filled
 * @c: the byte to fill the memory area with
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the filled memory area (s)
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = c;

	return s;
}

