#include "main.h"
#include <stdio.h>

/**
 * _strcpy - function that copies the string pointed
 * @dest: char
 * @src: char
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	nt count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
