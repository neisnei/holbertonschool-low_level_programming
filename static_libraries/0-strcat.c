#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: char
 * @src: 0
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int string = 0, string2 = 0;

	while (*(dest + string) != '\0')
	{
		string++;
	}

	while (string >= 0)
	{
		*(dest + string) = *(src + string2);
		if (*(src + string2) == '\0')
			break;
		string++;
		string2++;
	}
	return (dest);
}
