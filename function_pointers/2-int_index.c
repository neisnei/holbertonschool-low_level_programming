#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Write a function searches a integer
 * @array:
 * @size:
 * @cmp:
 *
 * Return: 0 if false, something else otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array)
	{
		for (i = 0; i < size; ++i)
		{
			if(cmp(array[i]))
				return (i);
		}
	}

	return (-1);
}
