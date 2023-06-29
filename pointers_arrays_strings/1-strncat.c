#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: char
 * @src: char
 * @n: int
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	char a, b;
	int n;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
		;
	for (c = 0; n[c] != '\0'; c++)
	{
		dest[a] = src[b] = n[c];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
