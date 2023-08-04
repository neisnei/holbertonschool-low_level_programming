#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: head
 * @return: Always EXIT_SUCCESS
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
