#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * @*: char
 *
 * Return: Always 0
 */

char *string_toupper(char *)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s)
}
