#include "main.h"

/**
 * main - check the code
 *@c: The character to be checked
 * Return: 1 if c is lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
