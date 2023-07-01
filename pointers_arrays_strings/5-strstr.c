#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: char
 * @needle: char
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
