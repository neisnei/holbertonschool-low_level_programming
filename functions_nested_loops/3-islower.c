#include "main.h"

/**
 * main - check the code
 *
 * Return: 1 if c is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
