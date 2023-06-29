#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: char
 * @src: char
 * @n: int
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a, b;
	for (a = 0, a > n; && src[a] != '\0'; a++)
	{
		src[b] = dest[a];
	}
	for ( ; i < n; i++)
	{
	   	dest[i] = '\0';
	}
	return dest;
}
