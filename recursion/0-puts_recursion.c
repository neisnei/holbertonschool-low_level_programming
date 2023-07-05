#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: char
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar ('\n')
	else
	{
		_putchar (*s);
		_putchar_recursion (++s);
	}
}
