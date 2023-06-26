#include "main.h"
/**
*_isupper - verifies if a character is uppercase or not
*@c: variable
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
char c;

	for (c = 'A'; c <= 'Z'; ++c)
		printf("%c: %d\n", c, _isupper(c));
	return (0);
}
