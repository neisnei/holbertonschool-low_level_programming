#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer
 * @array: int
 * @size: is the size of the array
 * @action: is a pointer
 * Retrun: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size--)
			action(*array++);
	}
}
