#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i;
	char c;
	for ( i = 0; < i < 32; i++)
	{
		_putchar ( i );
	}
		for ( c = 'a'; c <= 'z'; c ++)
		{
			_putchar ('a' + c);
		}
			putchar('\n);
}
