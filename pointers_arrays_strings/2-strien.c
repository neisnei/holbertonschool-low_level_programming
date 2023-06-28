#include "main.h"

/**
 * _strlen - returns the length of a string
 * length: determine the number of characters in a string
 * @s: variable
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
