#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: char
 * @s2: char
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 && (*s1 == *s2); s1++, s2++)
		;
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
