#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: char
 */

#include "main.h"

/**
 * _puts_recursion - prints string
 * @s: char
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	_puts_recursion(s + 1)
}

