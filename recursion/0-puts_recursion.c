#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: char
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}

	_putchar (*s);
	return (_puts_recursion(s + 1));
}
