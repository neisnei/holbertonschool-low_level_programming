#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: char
 * @src: 0
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int s = 0, s2 = 0;

	for (*(dest + s) != '\0')
	{
		s++;
	}

	while (s2 >= 0)
	{
		*(dest + s) = *(src + s2);
		if (*(src + s2) == '\0')
			break;
		s++;
		s2++;
	}
	return (dest);
}
