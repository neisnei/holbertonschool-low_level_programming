#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *@h: head of the list
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{
	int num;

	for (num = 0; h != NULL; num++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (num);
}
