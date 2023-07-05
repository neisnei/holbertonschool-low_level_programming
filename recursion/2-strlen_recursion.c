#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: variable
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
