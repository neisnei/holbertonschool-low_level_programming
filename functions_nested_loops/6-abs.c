#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes the absolute value of an integer.
 * @n: check and compute the value of an integer.
 * Return: Always 0
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
