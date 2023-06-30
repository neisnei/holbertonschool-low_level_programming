#include "main.h"

/**
 * string_toupper - changes all lowercase letters
 * @*: char
 *
 * Return: Always 0
 */

char *string_toupper(char *)
{
	char* string_toupper(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    return str;
