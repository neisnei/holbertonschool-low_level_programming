#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *@h: head of list
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
	while (h != NULL)
	{
		h = h->next;
			c++;
			return (c);
	}
