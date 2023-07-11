#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * size: int
 * c: int
 * Return: a pointer to the array, or NULL
 */

char *create_array(unsigned int size, char c)
{
	char c;
	unsigned int s;

	if (size == 0)
		return (NULL);

	c = malloc(size * sizeof(*c));
	if (c == NULL)
		return (NULL);

	for (s = 0; s < size; s++)
		c[s] == c;

	return (c);
}
