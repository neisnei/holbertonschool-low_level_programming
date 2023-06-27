#include "main.h"

/**
 * swaps_int - swaps that values of two integers
 *@a: 2
 *@b: 2
 */

void swap_int(int *a, int *b)
{
	int *a;
	int *b;

	a = b;
	b = a;

	swap_int(&a, &b);
}
