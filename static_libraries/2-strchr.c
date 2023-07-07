#include "main.h"

/**
 * _strchr - locates a charater in a string
 * @s: char
 * @c: char
 * Return: Always 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
